#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int tp;
    int i=1;
    int j;
    while(i<=n) {
        j=1;
        tp= i;
        while(j<=i) {
            cout << tp ;
            j++;
            tp --;
        }
        i++;
        cout << endl;
    }
}