#include<bits/stdc++.h>
using namespace std;
class Solution{
     public:
      bool canConstruct(string ransomNote,string magazine){
        unordered_map<char,int> charFrequency;
        for(char ch:magazine){
            charFrequency[ch]++;
        }
        for(char ch:ransomNote){
            if(charFrequency[ch]>0){
                charFrequency[ch]--;
            }else{
                return false;
            }
        }
        return true;
      }
};
int main(){
    Solution sol;
    string ransomNote="a";
    string magazine="b";
    cout<<sol.canConstruct(ransomNote,magazine)<<endl;//output: 0 (false)
    return 0;
}