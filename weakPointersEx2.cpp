#include <iostream>
#include <memory>

// Second example of using weak_ptr to avoid circular reference.

class Child;    

class Parent {
  public:
    std::shared_ptr<Child> child_ptr;
    ~Parent(){ std::cout << "Parent destroyed" << std::endl; }
};

class Child {
  public:
    std::weak_ptr<Parent> parent_ref;
    ~Child(){ std::cout << "Child destroyed" << std:endl; }

    void greet_parent(){
      std::shared_ptr<Parent> parent;
      if(auto parent = parent_ref.lock()){
        std::cout << "Hello, Parent is here!" << std::endl;
      }else{
        std::cout << "Parent is gone." << std::endl;
      }
    }
};

int main(){

  std::shared_ptr<Parent> parent = std::make_shared<Parent>(); // parent pointing to a Parent object | parent reference count becomes 1 
  std::shared_ptr<Child> child = std::make_shared<Child>();    // child reference count becomes 1

  parent->child_ptr = child;        // child reference count becomes 2
  
  child->parent_ref = parent;      // parent reference count stays 1

  std::cout << "child's reference count: " << child.use_count() << std::endl;    // output: 2
  std::cout << "parent's reference count: "<< parent.use_count() << std::endl;   // output: 1

  child->greet_parent();

  parent.reset();          //destroy the stron shared_ptr

  child->greet_parent();    //parent is gone! 

  return 0;        //child is destroyed
}

// Important information:

// parent in main() is a smart pointer (std::shared_ptr<Parent>), a special C++ object that points
//  to and owns a dynamically allocated Parent object (creted by std::make_shared<Parent>();)

// Analogy: think of "Parent" object as a house and "parent" as the deed of the house.
//          the deed (parent) isn't the house itself but controls who owns it. When you write 
//          "std::shared_ptr<Parent> parent", you're creating a deeed that points to a new parent house

//  1. Create "child": Line 30
//  - "child" is a std::shared_ptr<Child> that owns a new "Child" object (created by std::make_shared<Child>();
//  - The "Child" object's reference count is 1 (only "child" owns it, for now).
//  - Analogy: "child" is a deed (legal ownership document) to charlie's house, keeping it stading.

//  2. Assign child_ptr: Line 32
//  - "parent->child_ptr" is the Parent object's std::shared_ptr<Child> member.
//  - "parent->child_ptr" = child", makes child_ptr point to the same "Child" object as "child".
//  - Now, TWO (2) shared_ptr own the "Child" object: child (int main()) and the child_ptr (inside the Parent object)
//  - The "Child's" reference count increases to 2
//
//  - Both "child" and "child_ptr" are "owners" becuase they're shared_ptr that keep the "Child" object alive.
//  - 2nd Analogy: Charlie's house has two deeds ("child" and "child_ptr"). The house stays standing until both 
//                 deeds are burned (i.e., borh shared_ptr are reset or go out of scope)
//
// =====
//  Ownership of parent->child_ptr - child_ptr
//
// When parent->child_ptr = child : child_ptr becomes the second owner of the "Child" object, 
//                                  increasing it's reference count 2 ("child" and "child_ptr" own it).
//                                  This means the "Child" stays alive until both "child" and "child_ptr" stop poiting to it.
//
// Game dev Analogy:
// Like a "Player" owning a "Sword" via a shared+ptr, ensuring the "Sword" stays in the game until the "Player" drop it.
//
// =====
// Member variable "parent_ref" in "Child"
//
// Type: std::weak_ptr<Parent> (a non-owning smart pointer).
// Role: Points to the "Parent: without owning it, avoiding a circular reference
//       ("I know my parent, but I don't keep then alive")
//
// Ownership
//
// "parent_ref" doesn't increase the Parent's reference count, so the "Parent" can be destroyed when "parent" is reset(),
//   breaking any potental cycle.
//
//  Game dev Analogy:
//  Like a "Sword" knowing it's "Player" via weak_ptr, so if the "Player" "dies" the "Sword" does't keep them in memory.




