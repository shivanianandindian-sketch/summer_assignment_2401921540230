#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int strStr(string s1,string s2){
        int m=s1.length();
        int n=s2.length();
        for(int i=0;i<=m-n;i++){
            for(int j=0;j<n;j++){
                if(s1[i+j]!=s2[j]){
                   break;
                }
                if(j==n-1){
                    return i;
                }
            }
        }
        return -1;
    }
};
int main(){
    Solution sol;
    string s1 = "hello";
    string s2 = "ll";
    int result = sol.strStr(s1, s2);
    
    if (result != -1) {
        cout << "The index of the first occurrence of s2 in s1 is: " << result << endl; // Output: 2
    } else {
        cout << "s2 is not found in s1." << endl;
    }
    
    return 0;
}