#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n= s.size();
        int left=0;
        int right=n-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        
    }
};
int main(){
    Solution s;
    vector<char>str={'h','e','l','l','o'};
    s.reverseString(str);
    for(auto ch:str){
        cout<<ch<<" ";//output:o l l e h
    }
    return 0;
}