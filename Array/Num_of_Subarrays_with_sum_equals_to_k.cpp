class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        int sum = 0;
        int count = 0;
        for(int i = 0; i < arr.size(); i++){
            sum = 0;
            for(int j = i; j < arr.size(); j++){
                sum = sum + arr[j];
                if(sum == k)
                count = count + 1;
            }
        }
        return count;
    }
};