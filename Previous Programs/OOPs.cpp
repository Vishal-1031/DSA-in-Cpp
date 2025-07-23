#include <iostream>
using namespace std;
class Animal {
    //public: // isse ky ahota hai ki public ke niche jitna bhi data likha hoga wo saara ka saara public mark hojata hai 
    // state or properties 
    // private :
    // int weight;  ye sab getter setyter ke loye hai 
    public :
    int age;
    string name;
    int weight;

    // behaviour or functions 
    void eat(){
        cout<< " the animal ramesh eats" << endl;
    }

    void sleep(){
        cout << " the animal ramesh sleeps" << endl;
    }
     void setWeight (int w){
         weight = w;
    }
    void getWeight(){
        cout << weight << endl ;
    }
   
};
int main (){
   
   // object creation 

   // object creation statically 
   Animal ramesh;
//    cout <<" age of ramesh is " << ramesh.age << endl;// private error dega bcz class is private by default
//    cout << " name of ramesh is " << ramesh.name << endl;// public likhne ke baad garbage value dega bcz hamne value update nhi kiya hai abhi tk 
//    ramesh.age = 20;
//    ramesh.name = " Sher ";
//     cout <<" age of ramesh is " << ramesh.age << endl;
//     cout << " name of ramesh is " << ramesh.name << endl;
//     cout << " we are now calling function of the class through object " << endl;
//     ramesh.eat();
//     ramesh.sleep();
    // if the access specifier is private then we can get the member functions through getters and setters 
    // ramesh.setWeight(75);
    // ramesh.getWeight();

    // Dynamic Memory
    // This is how we declare object dynamically 
    Animal* suresh = new Animal ; // suresh wale dabbe ke  andr uss object ka address pada hoga 
    //  suresh.age =15; // address ki age 
    // suresh.type = "billi"; // address ka type 
    (*suresh).age =15; // iska mtlb hai actual object 
    (*suresh).name = "billi"; // iska mtlb hai actual object 
   
    // alternate method
    suresh-> age = 17;
    suresh-> name = "kutta";
    cout << "suresh->age : " << suresh-> age << endl;
    cout << "suresh->name : " << suresh-> name << endl;

    return 0;

}