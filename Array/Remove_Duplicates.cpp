#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<string> removeDuplicates(vector<string>& arr) {
unordered_set<string> seen;
vector < string > v;
for(auto s : arr ){
    if(seen.find(s) == seen.end()){
        seen.insert(s);
        v.push_back(s);
    }
}
return v;
}
int main(){
    vector <string> arr = {"apple", "banana", "apple", "orange", "banana"};
     vector<string> result = removeDuplicates(arr);
     for (const string& s : result) {
        cout << s << " ";
}
return 0;
}

