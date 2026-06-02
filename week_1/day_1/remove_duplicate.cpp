#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n= nums.size();

        for(int j=1; j<n;j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2};
    int new_length = sol.removeDuplicates(nums);
    
    cout << "New length: " << new_length << endl; // Output: New length: 2
    cout << "Modified array: ";
    for (int i = 0; i < new_length; i++) {
        cout << nums[i] << " "; // Output: Modified array: 1 2 
    }
    cout << endl;
    
    return 0;
}