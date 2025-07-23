#include<iostream>
using namespace std;
 int main(){
// int arr[10]= {23,122,41,67};
// cout << "address of the first memory block is "<< arr << endl;
// cout << arr[0]<< endl;
// cout << "address of the first memory block in array by another way " << &arr[0] << endl;

// cout << "4th" << *arr << endl;//23
// cout << "5th" << *arr +1 << endl;//23+1=24
// cout << "6th" << *(arr +1 )<< endl;//value at a[1]
// cout << "7th" << arr[2] << endl;// 41
// cout << "8th" << *(arr +2) << endl; //41

// int temp[10];
// cout << sizeof(temp)<< endl;// give out 4*10= 40 bytes

// int *ptr = &temp[0];
// cout << sizeof(ptr)
// int *pt = &temp;
//} 
int arr[4] = {10,15,20,25};
// cout << arr << endl; // address of the first element 
// cout << & arr << endl;// value 
// cout << &arr[0] << endl; // first element ka address  
// cout << &arr[2] << endl; // address upadate hoke aayega
// int* p = arr;
// cout << p << endl;
// cout << &p << endl;
// p =p+1 ;
// cout << *p << endl;
// p=p+2;
// cout << *p << endl;
// cout << sizeof(p) << endl;
// cout << sizeof(*p) << endl;
// cout << sizeof(arr) << endl;
// cout << *(arr + 1) << endl;
// cout << arr + 2 << endl;
// cout << arr + 3 << endl;
char ch[10] = "Vishal";
char* c = ch;
cout << ch << endl;
cout << &ch << endl;
cout << ch[0] << endl;
cout << ch[2] << endl;
cout << c << endl;
cout << *c << endl;
cout << &c << endl;
 
 }