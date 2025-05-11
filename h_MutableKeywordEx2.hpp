#include <string>

class Cache{
  public:
    void isValid() const;

  private:
    mutable bool valid = false;
};
