class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        map<int,int> m;
        int sum = 0 , length = 0, prefixSum = 0;
        for(int i = 0 ; i< arr.size() ; i++){
            sum = sum + arr[i];
            if(sum == k)
            length = max(length, (i + 1));
            prefixSum = sum - k;
            if (m.find(prefixSum) != m.end()){
                length = max(length, (i - m[prefixSum]) );
            }
            if(m.find(sum) == m.end()){
                m[sum] = i;
            }
        }
        return length;
    }
};