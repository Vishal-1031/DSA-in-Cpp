#include<iostream>
using namespace std;
int main(){
    int N,c ;
    cin>> N;
    int arr[N] = {1,1,1,2,2,3,4,4,4,6,8,8,8};
    for(int i=0;i <N; i++){
        c=0;
        for(int j=0;j<N; j++){
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if (c==1){
            cout << arr[i];
        };// use break if u wanna terminate after finding jusst one.  
        
    }
}