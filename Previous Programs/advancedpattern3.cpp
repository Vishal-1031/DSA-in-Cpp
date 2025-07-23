#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int i,j,k;
    for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
    cout<<" ";
    }
    for(k=1;k<=i;k++){
    if(k==1)
    cout<<"*";
    else if(k!=n && i!=n)
    cout<<" ";
    else
    cout << "*";
    }
    cout<< endl;
    }
}