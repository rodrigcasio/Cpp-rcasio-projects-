#include <iostream>
#include <memory>

class Sword;      // Forward  declaration: Sword exists, defined later....
  
class Player{
  public:
    std::shared_ptr<Sword> sword_ptr;
    ~Player(){ std::cout << "Player destroyed" << std::endl; }
};

class Sword{
  public:
    std::shared_ptr<Player> player_ref;
    ~Sword(){ std::cout << "Sword destroyed" << std::endl; }

    void check_owner(){
      if(auto player = player_ref.lock()){        // also works "std::shared_ptr<Player> player" instead of "auto" keyword.
        std::cout << "Sword swings for Player!" << std::endl << std::endl;
      }else{
        std::cout << "Player is gone!" << std::endl << std::endl;
      }
    }
};

int main(){

  std::shared_ptr<Player> player = std::make_shared<Player>();        // "player" owns "Player" object (reference count = 1)
  std::shared_ptr<Sword> sword = std::make_shared<Sword>();          // "sword" owns "Sword" object (reference count = 1)

  player->sword_ptr = sword;            // "sword_ptr" (from Player class) becomes the second owner of the "Sword" object (reference count = 2)
  sword->player_ref = player;          // "player_ref" (from Sword class) weakly points to "Player" so "Player's" object reference count stays 1.

  std::cout << "sword's count reference: " << sword.use_count() << std::endl;
  std::cout << "player's count reference: "<< player.use_count() << std::endl;

  sword->check_owner();

  player.reset();            // drops "Player" object reference count to 0. It's basically eliminating the shared_ptr  called "player" which also drops automatically the weak_ptr "player_ref"

  sword->check_owner();      // detects "Player" is gone via "player_ref.lock()"

  return 0;           // shared_ptr  "sword" goes out of scope.
}

//  Circular reference avoidance:
//  
//  "player_ref" (a weak_ptr) doesn't own "Player" object like "player" (a shared_ptr), so no cycles forms
//  if "player_ref" were a shared_ptr, "Player" and "Sword" would own each other, causing a memory leak.

// is there a way to access the weak_ptr resource is poiting to 

// the player_ref.lock c

// Explanation of the if(auto player = player_ref.lock());
//
// IMPORTANT Explanation:
//
//         player_ref.lock() creates a "std::shared<Player>" if it the "Player" object is still alive (owned by at least one shared_ptr, like main(), "player")
//         if the "Player" object is still alive.. it creates a "std::shared_ptr<Player>" pointing to that player object.
//
//         The result of the "player_ref.lock()", (std::shared<Player>) is assigned to the variable "player", which it is declared with auto in the if statement.
//         
//         (auto player = player_ref.lock())  [it is still alive! then..]
//         (auto player = std::shared<Player>) [assigning the "std::shared_ptr" to "player"]
//
//         The (=) operator copies the new "std::shared_ptr<Player>" from lock() into "player".
//         This shared_ptr now co-owns the "Player" object, increasing it's reference count (e.g, from 1 to 2 temporarily).
//
//         Step-Step detailed process:
//
//         1.   player_ref.lock() is called, creating a "std::shared_ptr<Player>" IF the "Player" object exists.
//         2.   The compiler sees "auto player" = .. and deduces into "player's" type as std::shared<Player>.
//         3.   The "std::shared_ptr<Player> from .lock() is copied into "player" via "="
//         4.   The "if" checks if "player" is non-empty (true if the "Player" object exists, false if lock() returned an empty shared_ptr).
//         5.   Inside the true block of the "if" statement, there are at that moment. 3 pointers pointing at the same "Player" object
//
//          Pointers inside the true block of the if() statement:
//
//              1. Strong "std::shared_ptr<Player> player" from "main()"
//              2. Weak "std::weak_ptr<Player> player_ref"
//              3. New strong "std::shared_ptr<Player> player" in check_owner()
//
//  
//  Reference Count:
//      
//      - Before 'check_owner()': "Player's" object reference count = 1 (main()'s "player").
//      - In the "if" block: Player's reference count = 2 (main()'s "player" + "auto player" from "lock()")
//      - "player_ref" doesn't count toward the reference count. 
//      - After "if" block: "auto player" is destroyed, so count drops back to 1.
//      - Laslty, after "player.reset()" : count = 0, "Player" object is destroyed!.
//
//  How does the if() works in check_owner():
//      
//      - The "if' statement evaluates lock()'s result as true of false because "std::shared_ptr has a boolean
//        conversion operator that makes it act like "true" when non-empty (poiting to an existing object) and 
//        "false" when empty (not poiting at anything)..
//
//        "If" evaluation to "auto player"
//
//        -  In "if(auto player = player_ref.lock())", "player_ref.lock()" return a "std::shared_ptr<Player>"
//          
//          --The "if condition checks "player's" boolean value:
//             - A non-empty "shared_ptr" (pointing to a Player object) evaluates to "True".
//             - An empty "shared_ptr" (no object, e.g., after player.reset()) evaluates to "False".
//     
//    Analogy
//
//         - "player_ref.lock()" is like calling a house registry to check if the "Player" house exists.
//         - If the house is standing (owned by "main()'s" "player"), lock() hands you a new deed (std::shared_ptr<Player>), which is "valid" (true)
//         - If the house is gone, "lock()" gives you blank paper (empty shared_ptr), which is "invalid" (false)
//         - The "if" is like cheating, "Did I get a real deed or a blank paper?" Real deed -> enter the house (true block). Blanck paper -> walk away (else block).
//
//
//

