#include<iostream>
using namespace std;
int main () {
    int a[100];
    int ans = -1;
    int s=0;
    int n,e,mid;
    cin>> n ;
    int key;
    cin >> key;
    e= n-1;
    mid= s +(e-s)/2;
    for(int i=0;i<n;i++){
    cin>> a[i];
    }
    while(s<=e){
    if(a[mid]== key){
    ans=mid;
    e=mid-1;
    }
    if(a[mid]< key){
    s=mid+1;
    }
    if(a[mid]> key){
    e= mid-1;}
    mid= s + (e-s)/2;
    }
    cout<<ans;
    ans=-1;
    s=0,e=n-1;
    mid= s + (e-s)/2;
   while(s<=e){
    if(a[mid]== key){
    ans=mid;
    s=mid +1;
    }
    if(a[mid]< key){
    s=mid+1;
    }
    if(a[mid]> key){
    e= mid-1;}
    mid= s + (e-s)/2;
    }
    cout<< ans;
    
    


}