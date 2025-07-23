// #include <iostream>
// using namespace std;

// class Animal {
// public :
//   int name;
//   int age;

//   void eat() {
//     cout << "All animals eat " << endl; }
// };
// // Inheritance
// class Dog : public Animal { // learn the syntax, it is important

//             };

// int main() {

//   Dog Tommy;
//   Tommy.eat();
//   return 0;
// }

// #include <iostream>
// using namespace std;

// class Animal {
// public: // Base class ka access modifier

//   int name;
//   int age;

// };
// // Inheritance
// class Dog : public Animal { // Ye access ko mode of tranfer wala access
// modifier kehte hai

//             };

// int main() {

//   Dog Tommy;
//   cout << Tommy.age; // ye jo tommy object bana hai usme jo access modifier
//   bana hai wo public hai issilye answer ayega return 0;
// }

#include <iostream>
using namespace std;

class Animal {
public: // Base class ka access modifier
  int name;
  int age;
};
// Inheritance
class Dog : protected Animal { // Ye access ko mode of tranfer wala access
                               // modifier kehte hai
public: // iss class ke bahar agr koi bhi data member ya member function hme use
        // krna hai to yaha pe public likhna hoga
  void sleep() {
    cout << "Dog is sleeping" << endl;
    cout << this->age << endl; // if we access the parent class members inside the class then it can be accessed but not directly through the child class 
    }
};

int main() {

  Dog Tommy;
  // cout << Tommy.age; // ye jo tommy object bana hai usme jo access modifier
  // bana hai wo protected hai issilye answer nhi aayega
  Tommy.sleep();
  return 0;
}