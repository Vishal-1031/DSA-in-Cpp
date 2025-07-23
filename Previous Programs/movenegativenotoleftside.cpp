#include <iostream>
using namespace std ;

int main(){

    int arr[] = {1,2,-3,4,-5,6};
    int front =0;
    int end = sizeof(arr)/sizeof(arr[0]) - 1;
    while (front <= end){
        if (arr[front] < 0){
            swap(arr[front],arr[end]);
            end --; 
        }
        else {
        front ++ ;
        }

    }
    for (int i = 0 ;i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    return 0;
    // int arr[] = {-1,-1,-2,-3,-4,-5,8};
    // int n = sizeof(arr);
    // cout << n << endl;
}