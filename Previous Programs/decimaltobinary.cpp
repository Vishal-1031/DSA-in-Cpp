#include<iostream>
using namespace std;

int main(){
    int bin =0, rem = 0, num=0;
    int n,c=1;
    cin>> n;
    num=n;
    while(num!=0){
        rem = num%2;
        bin = bin + (rem*c);
        num = num/2;
        c=c*10;
    }
    cout<< "the binary of " << n<< " is : " << bin << endl ;
}