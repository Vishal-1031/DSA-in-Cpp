#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int tp =1;
    int i=1;
    int j;
    while(i<=n) {
        j=1;
        while(j<=i) {
            cout << tp ;
            j++;
            tp ++;
        }
        i++;
        cout << endl;
    }
}