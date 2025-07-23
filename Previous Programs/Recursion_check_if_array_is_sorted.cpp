#include<iostream>
#include<vector>
using namespace std;
// for ascending order 
bool check(vector<int>& arr,int& n,int i){
    // base case
    if(i==n-1)// taking n-1 because untill when we will reach n-1 its been already scanned 
    return true;

// 1 case solve kro OR processing
    if(arr[i+1] <= arr[i] ) // will not work for {1,1,1,1,1} type arrays 
return false;

// baaki recusion dekh lega 
    return check(arr,n,i+1);
}

int main(){
vector<int>v = {1,2,3,4,5,6,7};
int n = v.size();
int i = 0 ;
bool ans = check(v,n,i);
cout << "1 for element sorted and 0 for element not sorted : "<< ans <<endl;
return 0;
}
