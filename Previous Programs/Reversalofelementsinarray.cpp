#include<iostream>
using namespace std;
void reverse(int array[],int n)
{
int start=0;
int end =n-1;
while(start<=end)
{
swap(array[start],array[end]);
start++;
end--;
}
}
void print(int array[],int n)
{
for(int i=0;i<n;i++)
{
cout<< array[i]<< " ";
}
cout << endl;
}
int main ()
{
int arr[100];
int n;
cin>> n;
for(int i=0;i<n;i++){
cin>> arr[i];
}
for(int i=0;i<n;i++){
cout<< arr[i]<< ",";
}
int brr[100];
int x;
cin>> x;
for(int i =0;i<x;i++){
cin>> brr[i];
}
for(int i =0;i<x;i++){
cout<< brr[i]<<",";
}

reverse(arr,n);
reverse(brr,x);
print(arr,n);
print(brr,x);

}
