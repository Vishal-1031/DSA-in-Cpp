class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0, m = 0;
        while(m < nums.size()){
            if (nums[m] != 0){
                s ++;
                m ++;
            }
            else if(m + 1 < nums.size() && nums[m] == 0 && nums[m + 1] == 0){
                  m++;  
            }
            else if(nums[m] == 0 && m + 1 < nums.size() && nums[m + 1] != 0){
                swap(nums[s], nums[m+1]);
                s++;
                m++;
            }
            else{
                break;
            }
        }
    }
};