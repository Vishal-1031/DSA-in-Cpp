#include<iostream>
using namespace std;
int main(){
	int a[10]={1,1,1,0,2,0,1,0,2,2};
    int n;
    cin>> n;
    sort(a,a+n);
    for(int i=0;i<n;i++){
    cout <<a[i];
    }
    
    }