#include<iostream>
using namespace std;
bool ispossible(int arr[],int k,int n,int mid) {
    int area=0;
    int painter = 1;
    for (int i=0; i<n; i++) {
        if(area+arr[i]<=mid) {
            area+=arr[i];
        }
        else {
            painter++;
        }
        if(painter > k || arr[i]<mid) {
            return false;
        }
        area = arr[i];
    }
    return true ;
}

int main()
{
    int s=0;
    int k;
    cin >> k;
    int n;
    cin>>n;
    int arr[4]= {10,20,30,40};

int sum=0;// for getting max search space
for(int i=0; i<n; i++)
{
    sum=sum+arr[i];
}
int e=sum;
int ans = -1;
int mid = s+ (e-s)/2;
// applying binary search
while(s<=e)
{
    if(ispossible(arr,k,n,mid)) {
        ans=mid;
        e=mid -1;
    }
    else {
        s=mid+1;
    }
    mid = s+ (e-s)/2;
    
}
return ans;
}