#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int i=1;
    int j;
    char ch;
    while(i<=n) {
        j=1;
        ch= 'A' +i-1;
        while(j<=n) {
            cout << ch;
            ch ++;
            j++;
            
        }
        i++;
        cout << endl;
    }
}