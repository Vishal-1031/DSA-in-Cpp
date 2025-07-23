#include<iostream>
using namespace std;

int main()
{
    
    int n;
    cin >> n ;
    int i=1;
    int j,x;
    while(i<=n) {
        
        j=1;
        while(j<= n-i+1) {
            cout << j;
            j++;

        }
        x=1;
        while(x<i){
        cout <<"*";
        x++;
        }
        i++;
        cout << endl;
    }
    }
    