#include <vector>
#include <algorithm>

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        double current_window_sum = 0;
        
        for (int i = 0; i < k; ++i) {
            current_window_sum += nums[i];
        }
        
        double max_sum = current_window_sum;
        
        for (size_t i = k; i < nums.size(); ++i) {
            current_window_sum += nums[i] - nums[i - k]; 
            max_sum = std::max(max_sum, current_window_sum);
        }
        
        return max_sum / k;
    }
};