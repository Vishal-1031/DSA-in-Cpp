#include<iostream>
using namespace std;

int ways(int n){
    //base case
    if(n==1 )
    return 1;
    
    if(n==2)
    return 2;

    return( ways(n-1) + ways(n-2) );
}

int main(){
    
    int n;
    cout<<  "Enter the number of stairs" << endl;
    cin>> n;

    cout<< "The number of ways are : " << ways(n);
    
}