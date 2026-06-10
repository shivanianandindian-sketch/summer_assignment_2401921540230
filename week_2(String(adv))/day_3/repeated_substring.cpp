#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool repeatedSubstringPattern(string s){
        int n=s.length();
        for(int l=n/2;l>=1;l--){
            if(n%l==0){
                int times=n/l;
                string pattern =s.substr(0,l);
                string newStr ="";
                while(times--){
                    newStr+=pattern;
                }
                if(newStr==s){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    Solution sol;
    string s = "abcabc";
    bool result = sol.repeatedSubstringPattern(s);
    
    cout << "Does s consist of a repeated substring pattern? " << (result ? "Yes" : "No") << endl; // Output: Yes
    
    return 0;
}