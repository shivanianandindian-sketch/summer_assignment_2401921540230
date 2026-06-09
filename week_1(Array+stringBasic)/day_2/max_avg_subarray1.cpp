#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        double ans=0;
        int n= nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        ans=(double)sum/k;
        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            ans= std::max(ans,(double)sum/k);
        }
        return ans;
    }
};
int main (){
    Solution sol;
    std::vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    std::cout << std::fixed << std::setprecision(2) << sol.findMaxAverage(nums, k) << std::endl; // Output: 12.75
    return 0;
}
