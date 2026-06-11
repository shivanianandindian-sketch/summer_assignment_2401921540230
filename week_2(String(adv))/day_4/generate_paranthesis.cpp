#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> result;
    void solve(string &curr,int n,int open,int close){
        if(curr.length()==2*n){
              result.push_back(curr);
              return;
        }
        if(open<n){
              curr.push_back('(');
              solve(curr,n,open+1,close);
              curr.pop_back();
        }
        if(close<open){
          curr.push_back(')');
          solve(curr,n,open,close+1);
          curr.pop_back();
        }  
    }    
    vector<string> generateParenthesis(int n){
      string curr="";
      int open=0;
      int close=0;
      solve(curr,n,open,close);
      return result; 
    }      
};
int main(){
    Solution sol;
    int n = 3;
    vector<string> result = sol.generateParenthesis(n);
    
    cout << "Generated parentheses combinations: " << endl;
    for (const string& combination : result) {
        cout << combination << endl;
    }
    
    return 0;
}