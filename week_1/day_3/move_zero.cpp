#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
             swap(nums[i],nums[nonzero]);
             nonzero++;
            } 
        }
        
    }
};
int main(){
    Solution sol;
    vector<int> nums={0,1,0,3,12};
    sol.moveZeroes(nums);
    cout<<"Output: ";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" "; // Output: 1 3 12 0 0 
    }
    cout<<endl;
    return 0;
}