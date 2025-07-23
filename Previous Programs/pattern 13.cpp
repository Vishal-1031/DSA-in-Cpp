#include<iostream>
using namespace std;

int main()
{
    int p;
    int n,x,y;
    cin >> n ;
    int i=1;
    int j,space;
    while(i<=n) {
        space=1;
        while(space<=n-i) {
            cout << " ";
            space++;
        }
        j=1;
        p=1;
        while(j<=i) {
            
            cout << p;
            p++;
            j++;

        }
        x=1;y=i-1;
        while(x<i){
        cout << y ;
        x++;
        y--;
        }
        i++;
        cout << endl;
    }
}