#include <iostream>
using namespace std;
class Human {
public:
  int age;
  int weight;
  string name;
  string gender;

  // Default Constructor
  Human() {
    cout << "This is default Constructor called " << endl;
    this->age = 0;
    this->weight = 0;
    this->name = "";
    this->gender = "";
  }

  // Parameterised Constructor
  Human(int a, int b, string c, string d) {
    cout << "The parameterised Construtor is called " << endl;
    this->age = a;
    this->weight = b;
    this->name = c;
    this->gender = d;
  }

  // Copy constructor
  Human(Human &obj) { // class ke andr ek class type variable pass hota hai
    // Note 1 : Copy cobnstructor ke saath hamesha reference of object pass hota
    // hai irrespective bcz agr copy pass hoga toh ek infinite loop me fhass
    // jayega
    this->age = obj.age;
    this->weight = obj.weight;
    this->name = obj.name;
    this->gender = obj.gender;
  }

  // Destructor
  // Note : Destructor is automatically called for object created in static
  // memory but for object created in Heap memory we need to use delete keyword
  // along with the object to delete the memory created by the object
  ~Human() { cout << "I'm inside destructor" << endl; }

  void print() {
    cout << "The age of the Human is : " << age << endl;
    cout << "The weight of the Human is : " << weight << endl;
    cout << "The name of the Human is : " << name << endl;
    cout << "The gender of the Human is : " << gender << endl;
  }
};
int main() {

  // Vishal.age = 21 ;
  // Vishal.weight = 63 ;
  // Vishal.name = "Vishal";
  // Vishal.gender = "Male";
  Human Vishal(21, 64, "Vishal",
               "Male"); // agr hmlog parameterised constructor call nhi krte hai
                        // to automatically default constructor call hojata hai
  Human Betu;
  Betu.print();
  cout << endl;
  Vishal.print();
  cout << endl;
  // Creating Dynamic Object

  Human *Chaubey = new Human(21, 64, "Vishal", "Male");
  cout << "Calling a parameterised constructor for chaubey object" << endl;
  Chaubey->print();
  cout << endl;
  // Note : if we have multiple parameterised constructor then based on the
  // parameter passed during object creation the parameterised constructor will
  // be called Note 2 : Jab hm apna khud ka constructor banate hai to default
  // constructor hatthh jata hai wo call nhi hota hai

  // Copying an object to another object
  // Human h1 = Vishal;
  //  cout<< "Details for h1 without making copy constructor " << endl;
  // h1.print();
  // There is one more way to do the same using
  cout << "Details for h2 using copy constructor " << endl;
  Human h2(Vishal);
  h2.print();

  cout << "Size of the object Chaubey before calling destructor" << endl;
  cout << sizeof((*Chaubey)) << endl;
  // calling destructor for Object created in heap example is Chaubey
  delete Chaubey;
  cout << "Size of the object Chaubey after calling destructor" << endl;
  cout << sizeof(*Chaubey) << endl;
  // Why is the pointer still valid (non-null)?
  // In C++, delete does not automatically set the
  // pointer to nullptr. So, Chaubey still holds the
  // old memory address even though the memory is no longer valid.
  // You should set Chaubey = nullptr; after delete to avoid issues
  // with a dangling pointer and prevent accessing invalid memory.
  Chaubey = nullptr;
  cout << sizeof(*Chaubey) << endl;
  // You print the size of the object before and after deletion, and finally,
  // after setting Chaubey = nullptr, the pointer is null, but sizeof(*Chaubey)
  // still works because sizeof is a compile-time operation and doesn't depend
  // on the runtime state of the pointer.
}