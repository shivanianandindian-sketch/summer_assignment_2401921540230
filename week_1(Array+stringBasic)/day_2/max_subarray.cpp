#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int curr_sum = 0;
        int max_sum = INT_MIN;
        
        for (int val: nums){
            curr_sum += val;
            max_sum = std::max(max_sum, curr_sum);
            if (curr_sum < 0) {
                curr_sum = 0;
            }
         }    
        return max_sum;
    }
};
int main() {
    Solution sol;
    std::vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    std::cout << sol.maxSubArray(nums) << std::endl; 
    return 0;
}