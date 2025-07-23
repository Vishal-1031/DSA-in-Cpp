#include<iostream>
using namespace std;

    void update (int **p2){// aise hamlog function pass krte hai  
      // case 1 
      // p2 = p2 + 1 ; // everything remains same in this case
      
      // case 2
      /*p2 =*p2 +1;/* in this case the value inside the box of p
                    which is also the address of i will increment by 4
                    rest all will remain same */
      // case 3
      **p2 = **p2 +1;


    }

int main(){

    /*while declaring a pointer like int *p = &num;
    we use int before the pointer to show that on 
    which type of variable we are operating, what is its size 
    etc...*/
    
    // double pointer....
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    /*cout << "sab sahi chal raha hai " << endl;
    cout <<"address of i "<< &i << endl;
    cout <<"value inside the box of *p i.e address of i "<< p << endl;
    cout <<"value of *p "<< *p << endl;
    cout <<"adress  of **p "<< p2 << endl;
    cout <<"value of **p "<< **p2 << endl;
    cout << "address of i from p2 " << *p2 << endl;*/

    cout << "before" << i << endl;
    cout << "before" << p << endl;
    cout << "before" << p2 << endl;
    update(p2);
    cout << "after" << i << endl;
    cout << "after" << p << endl;
    cout << "after" << p2 << endl;

}