#include<iostream>

// Create a Car class
class Car{
  public:
    std::string brand;
    std::string model;
    int year;
};

class Book{
  public:
    std::string title;
    std::string author;
    int year;
};

int  main(){
  // Create an object of car
  Car c1;
  c1.brand = "BMW";
  c1.model = "X5";
  c1.year = 1999;

  // Anothe Car
  Car c2;
  c2.brand = "Ford";
  c2.model = "Mustang";
  c2.year = 1987;


  // Create Book object 1
  Book b1;
  b1.title = "Matilda";
  b1.author = "Roald Dahl";
  b1.year = 1988;

  // Create Book object 2
  Book b2;
  b2.title = "The Giving Tree";
  b2.author = "Shel Silverstein";
  b2.year = 1964;

  // Print the values
  std::cout<<c1.brand<<" "<<c1.model<<" "<<c1.year<<std::endl;
  std::cout<<c2.brand<<" "<<c2.model<<" "<<c2.year<<std::endl;

  std::cout<<"---------------------------"<<std::endl;

  std::cout<<b1.title<<", "<<b1.author<<", "<<b1.year<<std::endl;
  std::cout<<b2.title<<", "<<b2.author<<", "<<b2.year<<std::endl;
  return 0;
}