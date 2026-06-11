#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<string> stackstring;
        stack<int> countstack;
        string currentstring="";
        int k=0;
        for(char ch:s){
            if(isdigit(ch)){
                k=k*10+(ch-'0');
            }
            else if(ch=='['){
                countstack.push(k);
                stackstring.push(currentstring);
                k=0;
                currentstring="";
            }
            else if(ch==']'){
                int repeatcount=countstack.top();
                countstack.pop();
                string prevstring=stackstring.top();
                stackstring.pop();
                string expendedstring="";
                for(int i=0;i<repeatcount;i++){
                    expendedstring+=currentstring;
                }
                currentstring=prevstring+expendedstring;
            }
            else{
                currentstring+=ch;
            }
        }
        return currentstring;
        
    }
};
int main(){
    Solution sol;
    string s = "3[a]2[bc]";
    string result = sol.decodeString(s);
    
    cout << "Decoded string: " << result << endl; // Output: aaabcbc
    
    return 0;
}