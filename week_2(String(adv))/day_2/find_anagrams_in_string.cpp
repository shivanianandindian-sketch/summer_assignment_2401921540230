#include<bits/stdc++.h>
using namespace std;
class Solution {
public: 
    bool allZero(vector<int>&counter){
        for(int &i:counter){
            if(i!=0)
              return false;
        }
        return true;
    }
    vector<int> findAnagrams(string txt, string pot) {
        int n=txt.size();
        vector<int>counter(26,0);
        for(int i=0;i<pot.length();i++){
            char ch=pot[i];
            counter[ch-'a']++;
        }
        int i=0,j=0;vector<int>result;int k=pot.length();
        while(j<n){
            counter[txt[j]-'a']--;
            if(j-i+1==k){
                if(allZero(counter)){
                    result.push_back(i);
                }
                counter[txt[i]-'a']++;
                i++;
            }
            j++;
        }
        return result;
    }
};
int main(){
    Solution sol;
    string txt = "cbaebabacd";
    string pot = "abc";
    vector<int> anagram_indices = sol.findAnagrams(txt, pot);
    
    cout << "Anagram indices: ";
    for (int index : anagram_indices) {
        cout << index << " "; // Output: Anagram indices: 0 6 
    }
    cout << endl;
    
    return 0;
}