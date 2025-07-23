#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
        {
        cin>> arr[i];
        }
    cout<< "The array is : "<< endl;
    for (int i=0;i<n;i++){
        cout<< arr[i] << " ";
         }
         cout << endl;
            int ceil,floor;
            int s=0;
            int e = n-1;
            int mid = s +(e-s)/2;
            int key;
            cin >> key ;
            while (s<=e){
                if(arr[mid] == key)
                {
                    ceil = key;
                    floor = key;
                }
                else if(arr[mid]> key){
                    e=mid-1;
                    ceil = arr[mid];
                }
                else {
            s=s+1;
        floor=arr[mid];
            }
mid = s +(e-s)/2;
            }
            cout << "the ceiling is : " << ceil << endl;
            cout << "the floor is :  " << floor << endl;

}