#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int x=0;
if(n%3==0)
x= n/3;
else
x= (n/3) + 1 ;
int i =1;
while(i<=x)
{
    int j=1;
    while (j<=3){
        cout<< n << " ";
        n--;
        if(n==0)
        break;
    j++;
    }
    i++;
    cout<< endl;
}
}