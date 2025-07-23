#include<iostream>
using namespace std;

int main()
{
    int a[100]= {1,5,8,3,7,9};
    int n=6;
          for (int i=1; i<n; i++)
    {
        int temp = a[i];
        int j =i-1;
        while(j>=0 && a[j]>temp)
        {
        a[j+1]=a[j];
        j--;
        }
        a[j+1]= temp;
    }
    for (int i=0;i<n;i++){
    cout<< a[i];
    }
}