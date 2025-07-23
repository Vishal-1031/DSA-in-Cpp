#include<iostream>
using namespace std;
void merg(vector <int>&arr, int s, int e){
    int mid = e - (s+e)/2 ;
    int len1 = s-mid + 1 ;
    int len2 = e-mid ;
    vector <int> left(len1);
    vector <int> left(len2);
    int i = 0, j =0, k = s;
    while(i < len1){
        left[i++] = arr[k++];
        }
    while (j < len2){
        right[j++] = arr[k++];
        }
    i=0, j=0, k=s ;
    while(i<len1 && j<len2) {
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else 
            arr[k++] = right[j++];

    }
    while (i<len1)
        arr[k++]= left[i++];
    while(j<len2)
        arr[k++] = right[j++];

}


void mergesort(vector<>int &arr, int s, int e){
    if(s>=e)
    return;
int mid = s+(e-s)/2;
}