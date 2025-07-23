#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    cin>> n;
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
        for (int i=0;i<n;i++){
            int minIndex=i;
            for (int j=i+1;j<n-1;j++){
                if (a[j]<a[minIndex]){
                minIndex=j;
                }
            }
            swap(a[minIndex],a[i]);
        }
        for(int i=0;i<n;i++){
        cout << a[i]<< " ";
        }
}