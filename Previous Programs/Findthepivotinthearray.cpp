#include<iostream>
using namespace std;
int main()
{
    int a[5] = {3,7,9,1,2};
    int s=0;
    int n=5,mid;
    int e = n-1;
    mid=s+(e-s)/2;
    while(s<e) {
        if(a[mid ]>=a[0])
            s=mid;
        else
            e=mid-1;
        mid=s+(e-s)/2;
    }
    return s;
}