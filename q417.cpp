#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> out;
    bool dfs(vector<vector<int>> &mat, vector<vector<int>> &dp, int i, int j){
        if (i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size()) return 1;

        if (dfs(mat, dp, i+1, j) && dfs(mat, dp, i, j-1) && 
            ((mat[i][j] > mat[i+1][j]) || (mat[i][j] > mat[i][j-1]))){
            out.push_back({i, j});
            dp[i][j] = 1;
            return 1;
        } else if (dfs(mat, dp, i-1, j) && dfs(mat, dp, i, j+1))



    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {


    }
};

int main(){
    
    return 0;
}