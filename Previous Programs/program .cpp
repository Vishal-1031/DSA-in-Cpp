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
        while(j<=n) {
            ch='A'+i+j-2;
            cout << ch;
            j++;
            
        }
        i++;
        cout << endl;
    }
}