#include <iostream>
#include <memory>

// Exmaple of using a weak pointer to avoid circular reference of two classes

class NodeB;      // I'll introduce bob later, but trust me, he exists

class NodeA{
  public:
    std::shared_ptr<NodeB> nodeBPtr;    // strong pointer that can point to NodeB object.. NodeA is saying: " I can own a NodeB friend named Bob"
    ~NodeA(){ std::cout << "NodeA destroyed" << std::endl; }
};

class NodeB{
  public:
    std::weak_ptr<NodeA> nodeAPtr;      // A weak pointer to a NodeA object
    ~NodeB(){ std::cout << "NodeB destroyed" << std::endl; } 

//NodeB wants to use NodeA (via nodeAPtr), but since nodeAPtr is a weak_ptr, it must check if NodeA still extists
    void useNodeA(){
      std::shared_ptr<NodeA> nodeA;     // Local shared_ptr, initially null
      if(auto nodeA = nodeAPtr.lock()){        // lock() converts the weak_ptr to a shared_ptr, if NodeA object still alive, lock() return a valid shared_ptr (increasing the reference count temporarily)
        std::cout << "Accessing NodeA safely" << std::endl << std::endl;
      }else{
        std::cout << "NodeA is no longer available" << std::endl << std::endl;
      }
    }
};

int main(){

  std::shared_ptr<NodeA> nodeA = std::make_shared<NodeA>();        // Create NodeA
  std::shared_ptr<NodeB> nodeB = std::make_shared<NodeB>();        // Create NodeB

  nodeA->nodeBPtr = nodeB;            // NodeA owns NodeB
  nodeB->nodeAPtr = nodeA;            // NodeB weakly points to NodeA

  nodeB->useNodeA();            // Test accessing NodeA

  nodeA.reset();          //Destroy NodeA
  nodeB->useNodeA();      //NodeA is gone 

  return 0;            // NodeB is destroyed
}

//  ==== NodeA class quick explanation:

// "std::shared_ptr<NodeB> nodeBPtr" a is a member varaible of NodeA class, a shared_ptr 
  // that can point a NodeB object. It is like NodeA saying, " I can own a NodeB friend named Bob"

// When you set NodeA->nodeBPtr = nodeB in main(), NodeA takes ownership of NodeB,
  // ensuring nodeB isn't destroyed until NodeA ( or other shared_ptr owners) lets go.

// ===== NodeB class quick exmplanation:

// std::weak_ptr<NodeA> nodeAPtr" is a member variable of NodeB, a weak_ptr that can
  // point to a NodeA object without owning... It is like NodeB saying, " I know Alice -
  // but I don't control her life"

//Why weak_ptr? unlike shared_ptr, weak_ptr doesn't increase the reference count.
  // It lets NodeB reference NodeA without preventing NodeA from being destroyed. This
  // breaks the circular reference.

// Wehn you set nodeB->nodeAPtr = nodeA; in main().. NodeB keeps a weak reference to 
  // NodeA. it can check if NodeA is still alive (using .lock()), but it doesn't keep
  // NodeA alive.

// === setting up the relationship in main() 

// nodeA is a shared_ptr owning a NodeA object (reference count = 1)
// nodeB is a shared_ptr owning a NodeB object (reference count = 1)

// then...

// "nodeA->nodeBPtr = nodeB": NodeA's nodeBptr becomes ANOTHER shared_ptr to the NodeB object
                            // increasing NodeB's reference count to 2 (nodeB and nodeA->nodeBPtr)

// "nodeB->nodeAPtr = nodeA": NodeA's nodeAPtr becomes a weak_ptr to the NodeA object.
                          //  It doesn't increase NodeA's reference count (stays at 1 from nodeA)

// Why weak _ptr prevents circular reference

// Without weak_ptr, if NodeB had std::shared_ptr<NodeA> nodeAPtr:

// nodeA->nodeBPtr would keep NodeB alive (reference count >= 1)
// nodeB->nodeAPtr would keep NodeA alive (reference count >= 1)

// Neither reference count would reach to 0 so neither object would be destroyed - Memory leak!

// With std::weak_ptr<NodeA> nodeAPtr:

// nodeAPtr doesn't increase the NodeA's reference count.
// When nodeA goes out of scope, NodeA's reference count hits 0, destroying NodeA.
// NodeB's reference count then hits 0 (after nodeB and nodeA->nodeBPtr are gone),
// destroying NodeB

