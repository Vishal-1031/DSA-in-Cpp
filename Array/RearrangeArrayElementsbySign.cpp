// Note : Brute Force 2 Pointer

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0, o = 0;
        vector<int> v;
        int n = nums.size()/2;
        while(n > 0){
            while(nums[p] < 0){
                p++;
            }
            while(nums[o] >= 0){
                o++;
            }
            v.push_back(nums[p]);
            p++;
            v.push_back(nums[o]);
            o++;
            n--;
        }
        for(int i = 0; i < nums.size(); i++){
            nums[i] = v[i];
        }
        return nums;
    }
};


// ******************************************************************************************************
// Note : Optimised Single pass

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int PositivePosition = 0, NegativePosition = 1;
        int n = nums.size();
        vector<int> ans(n, 0 );
        for(int i = 0; i < n; i++){
            if(nums[i] >= 0){
                ans[PositivePosition] = nums[i];
                PositivePosition += 2;
            }
            if(nums[i] < 0){
                ans[NegativePosition] = nums[i];
                NegativePosition += 2;
            }
        }
        return ans;
    }
}