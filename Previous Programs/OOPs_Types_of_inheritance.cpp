#include <iostream>
using namespace std;

class Animal {
public: // Base class ka access modifier 
  
  int name;
  int age;

};
// Inheritance 
class Dog : public Animal { // Ye access ko mode of tranfer wala access modifier kehte hai   
  
            };

int main() {

  Dog Tommy;
  cout << Tommy.age; // ye jo tommy object bana hai usme jo access modifier bana hai wo public hai issilye answer ayega 
  return 0;
}