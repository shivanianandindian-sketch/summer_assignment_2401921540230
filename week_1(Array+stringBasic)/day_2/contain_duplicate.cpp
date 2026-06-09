#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(int x: nums){
            mp[x]++;
        }
        for(int x: nums){
            if(mp[x]>1){
                return true;
            }
        }
        
        return false;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    cout << boolalpha << sol.containsDuplicate(nums) << endl; // Output: true
    return 0;
}