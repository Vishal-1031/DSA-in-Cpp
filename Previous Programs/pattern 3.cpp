#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tp=1;
    int i,j;
    i=1;
    while(i<=n)
    {
    j=1;
    while (j<=i)
    {
    cout <<tp;
    j++;
    }
    i++;
    tp++;
    cout << endl;
    }
    }
