#include<iostream>
using namespace std ;
int main(){
    int i,n;
    int a[100];
    cin>> n;
    for(i=0;i<n;i++){
    cin>> a[i];
    }
    int ans=0;
    for (int i=0;i<n;i++){
    ans=ans^a[i];
    }
    return ans;
}