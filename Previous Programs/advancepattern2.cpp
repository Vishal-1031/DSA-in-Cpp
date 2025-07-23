
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int i,j,k,l,m;
    for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
    cout<<" ";
    }
    for(k=1;k<=i;k++){
    if(k==1)
    cout<<"*";
    else if(k!=n && i!=n)
    cout<<" ";
    else if(k>0 && k%2==0)
    cout << " ";
    else 
    cout << "*";
    }
    for(m=1;m<=i-1;m++){
    if(m==i-1)
    cout<<"*";
    else if(m!=i-1 && i!=n)
    cout << " ";
    else if(m>0 && m%2==0)
    cout << " ";
    else 
    cout << "*";
    }
    cout<< endl;
    }
}