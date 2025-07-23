#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countElements(vector<int>& arr) {
       int max = 0, count = 0;
       for(int i = 0; i < arr.size(); i++){
        if(arr[i] > max)
            count += 1;
        max = arr[i];
       }
        return count; // placeholder
    }
};

int main() {
    Solution obj;
    vector<int> arr = {7, 4, 8, 2, 9};
    int result = obj.countElements(arr);
    cout << result << endl;
    return 0;
}
