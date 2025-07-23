#include<iostream>
#include<vector>
#include<bits/stdc++.h>// headder file the we use to include all the standard libraries 
using namespace std;

int  main()
{   
    // creating vector
    vector<int>v ;
    vector<int>v1(5,1);//size 5 initialised with 1
    vector<int>v3 = {1,2,3,4,5};
    cout<< "Size and capacity of v"<< endl; 
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    
    v.push_back(2);
    v.push_back(5);
    v.push_back(10);
    cout << "After inserting values in the v" << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << "V1 size and capacity"<< endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
    v1.push_back(10);
    cout<< "New details of v1"<< endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;// doubled the size 
    cout << "Printing v1 elements"<< endl;
    for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";}
    cout << endl; 
    cout << "Printing the elements of V3 And size & capacity"<<endl;
    cout << v3.size() << endl;
    cout << v3.capacity() << endl;
    for(int i=0;i<v3.size();i++){
    cout<<v3[i]<< " ";}
    cout << endl;
    // over writing value 
    v3[3]=51;
    cout<< "Printing after upadating"<< endl;
   for(int i=0;i<v3.size();i++){
    cout << v3[i] << " ";
   }
   cout << endl;
   cout<< "Copying the values of v3 in a new vector b" << endl;
   vector<int>b;
   b = v3;
   cout << b.size() << endl;
   cout << b.capacity() << endl;
   for(int i=0;i<b.size();i++){
    cout<< b[i]<<" ";
    }
    cout << endl;
    cout << "New way to traverse " << endl ;
    for(auto i:b){
    cout <<i << " ";
    }
    cout << endl;

    // Sorting a vector 
    vector<int>st = {50,45,65,54,24,10};
    for (auto i: st){
        cout<< i << " ";
    }
    cout<< endl;
    cout << st.size() << endl;
   cout << st.capacity() << endl;
   st.push_back(78);
   cout << st.size() << endl;
   cout << st.capacity() << endl;
   // Sorting
   cout << "Sorting st" << endl;
   sort(st.begin(),st.end());
   for(auto i: st)
    {
        cout << i<< " ";
    }
    cout << endl;
    // sort(st.begin(),st.end(),greater<int>());
    // for(auto i: st)
    // {
    //     cout << i<< " ";
    // }
    // cout << endl;
    cout << "Searching through Binary Search for 24" << endl;// For binary search to work the vector or array must be sorted 
    cout<< binary_search(st.begin(),st.end(),24)<< endl;;
     cout << "Searching through Binary Search for 100" << endl;
    cout<< binary_search(st.begin(),st.end(),100)<< endl ;
}