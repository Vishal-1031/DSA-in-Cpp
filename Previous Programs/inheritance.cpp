#include<iostream>
using namespace std;
class SuperClass{
    int x;
    int y;
    public:
    void setXY
    void show(void){
        cout << " Show" << endl;
    }



};
class Subclass: public SuperClass{
    int z;
    public:
    void setZ(int z){
        this->z=z;
    }

    //overriding
    void show(void){
        // invoking super class overridden method show()
        SuperClass::show()

        cout<<"z:" << z << endl;
    }
};
int main(){
     
     Product product1;
     Product *pPtr;

     // passing reference to pPtr 
     pPtr = &product1;

     //invoke member function of product1 using its pointer 
     pPtr->setProduct("nirma", 99.99);
     pPtr->printProduct();

     return 0;

}