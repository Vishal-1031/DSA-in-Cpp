#include<iostream>
using namespace std;
int main(){
int arr[9]={7,9,10,1,2,3,4,5,6};
int s =0; 
int n = 9;
int e =n -1;
int mid = s + (e-s)/2;
while(s < e){
    if(arr[mid] >= arr[0] )
    s = mid;
    else 
    e = mid-1;
    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
    return mid;
    mid = s +(e-s)/2;
}
 cout << "pivot index is : " << s << endl << "the pivot element is : " << arr[s];
}