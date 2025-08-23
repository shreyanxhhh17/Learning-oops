#include<iostream>
using namespace std;

class Car{
  public:
    string brand;
    string model;
    int year;

    // Constructor defined inside the class
    Car(string x, string y, int z){
      brand = x;
      model = y;
      year = z;
    }
};


class Course{
  public:
    string Subject;
    string Instructor;
    int fees;

    Course(string x, string y, int z);
};

// Constructor defined outside the class
Course::Course(string x, string y, int z){
  Subject = x;
  Instructor = y;
  fees = z;
}

int main(){
  Car c1("BMW","X5",1999);
  Car c2("Ford","Mustang",2000);

  Course b1("React","Alice",2499);
  Course b2("Backend","Emma",3500);

  cout<<c1.brand<<", "<<c1.model<<", "<<c1.year<<endl;
  cout<<c2.brand<<", "<<c2.model<<", "<<c2.year<<endl;
  cout<<"-------------------------------------"<<endl;
  cout<<b1.Subject<<", "<<b1.Instructor<<", "<<b1.fees<<endl;
  cout<<b2.Subject<<", "<<b2.Instructor<<", "<<b2.fees<<endl;
}