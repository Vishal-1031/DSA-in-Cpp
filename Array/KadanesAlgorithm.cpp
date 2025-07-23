#include <iostream>
#include <vector>
#include<climits>
using namespace std;

// Function to find maximum subarray sum
int maxSubArray(vector<int>& nums) {
    int sum = 0; int maxi = INT_MIN;
    int start , ansStart ,ansend;
    for(int i = 0; i < nums.size(); i++){
        if(sum == 0)
            start = i;
            
        sum = sum + nums[i];
        if(maxi < sum){
            maxi = sum;
            ansStart = start;
            ansend = i;
        }

        if(sum < 0){

            sum = 0;
        }
    }
    for (int i = ansStart ; i <= ansend; i++){
        cout << nums[i] << " ";
    }
    return maxi; 
}

int main() {
     vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = maxSubArray(nums);
    cout << endl;
    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}
