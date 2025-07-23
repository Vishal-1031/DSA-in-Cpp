#include<iostream>
using namespace std;

int main()
{
    
    int n;
    cin >> n ;
    int i=1;
    int j,x,y,z,w;
    while(i<=n) {
        
        j=1;
        while(j<= n-i+1) {
            cout << j<< " ";
            j++; 

        }
        x=1;
        while(x<i){
        cout <<"* ";
        x++;
        }
        w=1;
        while(w<i){
        cout <<"* ";
        w++;
        }
        y=1;z=n-i+1;
        while(y<=n-i+1){
        cout <<z<< " ";
        z--;
        y++;
        }
        i++;
        cout << endl;
    }
    int a;
    for(a=1;a<=n;a++){
        for(int b=1;b<=a;b++)
        {
            cout << b << " ";
        }
        for(int c=1;c<=((2*n)-(2*a));c++){
            cout << "* ";
        }
        int v = a;
        for(int d= 1; d<= a; d++){
            cout << v<< " ";
            v--;
        }
       cout << endl;
    }
    ;
    }
    