#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rec_func(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &dp){
    
        if ((i == 0) && (j == 0)){
            dp[i][j] = min(dp[i+1][j], dp[i][j+1]) + grid[i][j];
            return;
        }

        if (i >= grid.size()-1){
            dp[i][j] = (dp[i][j+1] + grid[i][j]);
            if (j > 0){
                rec_func(grid, i, j-1, dp);
            }
            else{
                rec_func(grid, i-1, (j+grid[0].size()-1), dp);
            }

        }

        else if (i < grid.size()) {
            dp[i][j] = grid[i][j];
            if (j > 0){
                if (j < grid[0].size()-1){
                    dp[i][j] += min(dp[i+1][j], dp[i][j+1]);
                } else {
                    dp[i][j] += dp[i+1][j];
                }

                rec_func(grid, i, j-1, dp);
            }
            else {
                dp[i][j] +=  min(dp[i+1][j] ,dp[i][j+1]);
                rec_func(grid, i-1, (j + grid[0].size() -1), dp);
            } 
        }

    }

    int minPathSum(vector<vector<int>>& grid) {
        if ((grid.size() == 1) || (grid[0].size() == 1)){
            int summ = 0;
            for (int k : grid[0]) summ += k;
            return summ;
        }
        
        int start = grid[grid.size()-1][grid[0].size()-1];
        vector<vector<int>> dp(grid.size(), vector<int> (grid[0].size(), 0));
        dp[grid.size()-1][grid[0].size()-1] = start;
        rec_func(grid, grid.size()-1, grid[0].size()-2, dp);

        return dp[0][0];

    }
};

// 22ms // better appor. maybe avail

int main(){
    
    return 0;
}