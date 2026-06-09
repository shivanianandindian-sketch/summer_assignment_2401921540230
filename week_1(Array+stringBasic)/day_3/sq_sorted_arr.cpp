#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        int left=0,right=n-1;
        int k=n-1;
        while(k>=0){
            int a =nums[left]*nums[left];
            int b =nums[right]*nums[right];
            if(a>b){
              result [k]=a;
              left++;
            }
            else{
              result[k]=b;
              right--;
            }
            k--;
        }
        return result;
    }
};
int main(){
    Solution sol;
    vector<int> nums={-4,-1,0,3,10};
    vector<int> result=sol.sortedSquares(nums);
    cout<<"Output: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" "; // Output: 0 1 9 16 100 
    }
    cout<<endl;
    return 0;
}