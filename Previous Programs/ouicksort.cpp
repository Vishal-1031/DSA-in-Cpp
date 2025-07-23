#include<iostream>
using namespace std ;
int partition (int arr[], int s, int e){
     //choose pivot element 
     int pivot_index = s ;
     int pivotelement = arr[s];
     //step 2 find the right position for pivot element
     int count = 0;
     for(int i = s+1;; i< = e; i++){
        if (arr[i]<=pivotelement){
            count ++;

        }
     } 
     int rightindex = s+ count;
     swap(arr[pivot_index], arr[rightindex]);
     pivot_index = rightindex ;
     // step 3 left me chote aur right me bade 
     int i = s;
     int j =e ;
     while(i < pivot_index && j> pivot_index){
        while(arr[i]<=pivotelement){
            i++;
        }
        while(arr[j] > pivotelement){
            j--;
        }
     }
}
void main(){

}