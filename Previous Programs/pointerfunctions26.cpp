#include <iostream>
using namespace std;

void print(int *p){// this is how we take pointer parameters
cout << p << endl;
cout << *p << endl;
}

void update (int *p){
    //p=p+1;// pointer bss yaha pe update hoga but function ke bahar uski address update nhi hogi 
    *p = *p + 1 ;// if you will update the value of the pointer variable then it will be updated  
}

void size(int arr[]){// here instead of the whole array only a pointer name arr is passed
    cout << "size inside function = "<< sizeof(arr) << endl;// the size will be =4 since its a pointer 
}
int main()
{
    int value = 5;
     int *p = &value;

   /* print(p);// this is how we pass pointer in a function
    cout << "before update " << p << endl;
    update(p);
    cout << "after update " << p<< endl; // they both are giving the same value */

    cout << "before " << *p << endl;
    update(p);
    cout << "after" << *p << endl;
    cout << "value = " << value << endl; // value is also incremented here bcz we are passing the address 
    int arr[5] = {1,2,3,4,5};
    cout << " the size of array is = "<< sizeof(arr) << endl;
    cout << "after passing " << endl;
    size(arr);


    return 0;
}