#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token="";
        string result="";
        while (ss>>token){
            reverse(begin(token),end(token));
            result+=token+" ";
        }
        return result.substr(0,result.length()-1);
    }
};
int main(){
    Solution sol;
    string s = "Hello World";
    string result = sol.reverseWords(s);
    
    cout << "Reversed words: " << result << endl; // Output: "olleH dlroW"
    
    return 0;
}