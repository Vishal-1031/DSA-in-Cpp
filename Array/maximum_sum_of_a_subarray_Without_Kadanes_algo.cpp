class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int sum, maxi = INT_MIN;
        for(int i = 0 ; i < arr.size(); i++){
            sum = 0;
            for(int j = i ; j < arr.size(); j++){
                sum += arr[j];
                maxi = max(maxi,sum);
            }
        }
        return maxi;
    }
};

