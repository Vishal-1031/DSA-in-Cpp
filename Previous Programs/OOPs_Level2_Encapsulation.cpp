#include <iostream>
using namespace std;

// This is an example of Encapsulation
class Animal {

public: // for "Full Encapsulation " make only data members as private not the member functions
  // data members
  int age;
  string name;

  // memeber functions
  void eat() { cout << "The Animal Eats" << endl; }

  void sleep() { cout << "The Animal Sleeps " << endl; }
};
