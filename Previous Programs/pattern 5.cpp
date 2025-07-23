#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int i=1;
    int j;
    while(i<=n) {
        j=1;
        while(j<=n) {
            cout << (char)(65+j-1);
            j++;
            
        }
        i++;
        cout << endl;
    }
}