#include<iostream>
using namespace std;

int pivot(int arr[],int size) {
    int s=0;
    int e = size -1;
    int mid= (s+e)/2;
    while(s<e) {
        if(arr[mid]>=arr[0]){
            s=mid+1;}
        else
         {   e=mid;}
            
        mid=(s+e)/2;
    }
    return s;
}

int search(int arr[],int s, int e, int key)
{
    int mid = (s+e)/2;
    while(s<=e) {
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            e=mid-1;
        else
            s=mid +1;
        mid=(s+e)/2;
    }
}
int main()
{
    int n=8;
    int arr[8]= {7,9,1,2,3,4,5,6};
    int key;
    int i;
    cin>>key;
    int k= pivot(arr,n);
    if(arr[k]<= key && key <arr[0]) {
        i = search(arr,k,n-1,key);
    }

    if(arr[0]<= key && key <=arr[k-1]) {

        i = search(arr,0,k-1,key);
    }
cout << "the index of the key is " << i <<endl;
}