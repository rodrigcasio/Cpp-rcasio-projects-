#include <iostream>

//second example of using mutable keyword; it is used for the private member bool valid;
int main(){

  Cache cache1;

  cache1.isValid();        //prints cache is invalid!

  cache1.isValid();        //print cache is valid!

  return 0;
}
