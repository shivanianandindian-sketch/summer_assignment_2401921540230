#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        int i=0;int j=0; 
        while(i<m&&j<n){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==m;
    }
};
int main(){
    Solution sol;
    string s = "abc";
    string t = "ahbgdc";
    bool result = sol.isSubsequence(s, t);
    
    cout << "Is s a subsequence of t? " << (result ? "Yes" : "No") << endl; // Output: Yes
    
    return 0;
}