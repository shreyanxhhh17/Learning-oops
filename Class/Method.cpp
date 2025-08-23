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

class Cat{
  public:
    void sound(){
      cout<<"Meow!";
    }
};

int main(){
  Dog d1;
  d1.bark();

  Cat c1;
  c1.sound();
  return 0;
}