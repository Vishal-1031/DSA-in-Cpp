#include<iostream>
using namespace std ;
// class human{
//     public :
//     int age;
//     string name;

//     void ageassign(int age){
//         age = age;
//     }


// };
// int main(){
// human a;
// a.ageassign(17);
// cout << a.age << endl;
// } This is going to give garbage value 

class human{
    public :
    int age;
    string name;

    void ageassign(int age){
        this->age = age; // with THIS keyword we have to use arrow operator bcz it is a pointer 
    }


};
int main(){
human a;
a.ageassign(17);
cout << a.age << endl;
}