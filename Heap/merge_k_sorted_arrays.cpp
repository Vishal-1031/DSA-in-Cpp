#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    vector<int> result;
   for(auto i : kArrays){
       for(auto j : i){
           result.push_back(j);
       }
   }
   sort(result.begin(),result.end());

   return result;
}
