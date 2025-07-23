#include<iostream>
using namespace std;
int main(){
	int i,j,s;
    cin>> s;
    int a[5]={2,-3,3,3,-2};
    for(i=0;i<5;i++){
    for(j=i+1;j<5-i;j++){
    if(a[i]+a[j] == s)
    cout<< a[i] << a[j]<< endl;
    
    }
    }
    }