#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    char a = 65;
    int h = 5;
    long s = 100000;
    double f = 1.2223232;
    float g = 51.3233; 
    cout << sizeof(a) << endl << sizeof(h) <<endl<< sizeof(s) <<endl<< sizeof(f) <<endl << sizeof(g)<<endl;
    cout << sizeof(long)<< endl << sizeof(float) << endl ;
    // in this compiler float and lonf have 4 bytes memory storage. 
    // write directly the name of the data type in the sizeof operator to get the value 
    // size of operator can find out the size of data type, variables , array, structure , class , union and pointers.
    cout << INT_MIN<<" "<< INT_MAX<<" "<< LONG_MIN << " " << LONG_MAX<< endl << CHAR_MIN<< 
    " " << CHAR_MAX << endl ;// these functions give the min and max range values of any
    // in that perticular data type 
}