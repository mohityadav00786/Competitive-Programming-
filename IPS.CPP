#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
  public: 
    void getDetails(string name) {
      cout << name;
    }
};

// Derived class
class Driver: public Person {
  public: 
    string model;
    int salary;
    
};

int main() {
  Driver myCar;
  myCar.getDetails("mohit");
  myCar.model = "mustang";
  myCar.salary = 10000;
  cout <<" " + myCar.model + " " <<  myCar.salary ;
  return 0;
}
