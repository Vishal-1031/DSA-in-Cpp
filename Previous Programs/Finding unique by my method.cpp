#include<iostream>
using namespace std;
int main(){
int c;
int n;
cin>> n;
int a[100];
int i;
for(int i=0;i<n;i++){
cin>> a[i];
}
for(int i=0;i<n;i++){
c=0;
for(int j=0;j<n;j++){
if(a[i]==a[j])
c++;
}
if(c==1){
cout<< a[i];
break;
}
}
}