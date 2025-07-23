#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,50,40};
    int *ptr = arr;
    cout << "the adress of the array is : " << arr<< endl;
    cout << "the adress of the array is : " << &arr<< endl;
    cout << "the adress of the array is : " << ptr<< endl;
    cout << "the size of the array is : " << sizeof(arr) << endl;
    cout << "the length of the array is : " << sizeof(arr)/sizeof(arr[0]);
    cout << "printing of the elements without indexing " << endl ;
    cout << *arr << endl << *(arr+1) << endl << *(arr+2) << endl << *(arr+4);
    
}