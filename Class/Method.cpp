/**
 * Create a class Dog with a method bark() that prints "Woof!".
  Then call that method from main() using an object of the class.
 */

#include <iostream>
using namespace std;

class Dog{
  public:
    void bark(){
      cout<<"Woof!";
    }
};

int main(){
  Dog d1;
  d1.bark();
  return 0;
}