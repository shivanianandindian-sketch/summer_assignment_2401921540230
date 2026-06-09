#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(), n=mat[0].size() , o = m*n;
        if(r*c!=o)
          return mat;
        vector<vector<int>>res(r,vector<int>(c,0));
        for(int i=0;i<o;i++){
            res[i/c][i%c]=mat[i/n][i%n];
        }
        return res;      
    }
};
int main(){
    Solution s;
    vector<vector<int>>mat={{6,28},{10,14}};
    int r=1,c=4;
    vector<vector<int>>res=s.matrixReshape(mat,r,c);
    for(auto vec:res){
        for(auto i:vec){
            cout<<i<<" "; 
        }
        cout<<endl;//output:6 28 10 14
    }
    return 0;
}