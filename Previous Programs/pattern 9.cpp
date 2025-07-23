#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int i=1;
    int j,space;
    while(i<=n) {
        space =1;
        while(space<=n-i){
        cout << " ";
        space ++;
        }
        j=1;
        while(j<=i) {
            cout << "*";
            
            j++;
            
        }
        i++;
        cout << endl;
    }
}