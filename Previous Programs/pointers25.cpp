#include <iostream>
using namespace std;
int main(){
    int num=6;
   /* cout << "the adress of num is : " << &num<< endl;
    int i =7;
    char ch = 'a'; 
    char *x = &ch; //the data type of the pointer variable will always be same as the variable whose addres we are giving.   
    cout << *x;// this will give out the value of ch. 
    cout << x << endl;*/
    int *p = &num;
    cout << p << endl; // this will give the value which is stored in p i.e. address of num. 
    //the '*' in *p means the 'value' of the address stored in p 
    cout << *p << endl; // gives out the va lue in 'num' 
    //int *q; never do this !
    //int *q=0; segmentation fault  
    int i=0;
    int *r=0;
    r =&i; // this process is same as int *r=&i;
    cout << *r << endl;
    cout << r << endl;

    int n = 5 ;
    int a = num;
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;
     

     int *f = &num;// here we are passing the address of the variable 
     cout << "num before " << num << endl;
     (*f)++;
     cout << "num after " << num << endl;// this shows that passing by address/reference actually changes the vale while passing
     // by value does not changes the value of the variable
     //int num =0;
     //int *p = &num;
     //int *q = p; coping the value of one pointer to another 
     

     return 0;
}