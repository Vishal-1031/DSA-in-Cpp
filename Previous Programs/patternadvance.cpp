#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i-1;k++){
        cout << " ";}
        for(j=1;j<=n-i+1;j++){
        if(i==1){
            if(j%2==0)
            cout<<" ";
            else
            cout<< "*";}
        else if(j==1 && i!=1){
        cout << "*"  ;}
        else {
        cout << " " ;}
     }
     for(int l = 1;l<=n-i;l++){
        if(i==1){
            if(l%2==0)
            cout<< " ";
                else
            cout << "*";
        }
        else if(l==n-i && i>1)
        cout<< "*";
        else
        cout<< " ";
     }
    cout << endl;
    }
}
