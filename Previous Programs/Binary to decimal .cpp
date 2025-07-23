#include<iostream>
#include<math.h>
using namespace std;
 int main()
 {
 int n;
 cin >>n;
 int num = n;
 int ans=0, bit=0,i=0;
 while (n!=0){
 bit= n&1;
 ans=(bit*pow(10,i))+ans;
 n=n >> 1;
 i++;
 }
 cout << "The binary of " << num << " is " << ans<< endl;
 }