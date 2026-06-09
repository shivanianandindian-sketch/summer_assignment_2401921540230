#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int left=0;int maximum=0;
        for(int i=0;i<s.length();i++){
            while(seen.count(s[i])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[i]);
            maximum=max(maximum,i-left+1);
        }
        return maximum;

    }
};
int main(){
    Solution sol;
    string s = "abcabcbb";
    int longest_length = sol.lengthOfLongestSubstring(s);
    
    cout << "Length of longest substring without repeating characters: " << longest_length << endl; // Output: 3
    
    return 0;
}