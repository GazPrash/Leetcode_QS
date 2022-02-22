#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rec_func(int m, int n, int x, int y, vector<vector<unsigned long long>> &dp, vector<vector<int>> &mx){
        if ((x == 0) && (y == 0)){
            dp[x][y] = dp[x][y+1] + dp[x+1][y];
            return;
        }
        else if ((y == 0) && ( x < (m-1))){
            if (mx[x][y] == 1) dp[x][y] = 0;
            else {
                dp[x][y] = dp[x][y+1] + dp[x+1][y];
            }
            return rec_func(m, n, x-1, y+(n-1), dp, mx);
        }
        else if ((y == 0) && ( x == (m-1))){
            if (mx[x][y] == 1) dp[x][y] = 0;
            else dp[x][y] = dp[x][y+1];
            return rec_func(m, n, x-1, y+(n-1), dp, mx);
        }
        
        else if (y == (n-1)){
            if (mx[x][y] == 1) dp[x][y] = 0;
            else dp[x][y] = dp[x+1][y];
            return rec_func(m, n, x, y-1, dp, mx);
        }

        else if (x == (m-1)){
            if (mx[x][y] == 1) dp[x][y] = 0;
            else dp[x][y] = dp[x][y+1];
            return rec_func(m, n, x, y-1, dp, mx);
        }

        else
            if (mx[x][y] == 1) dp[x][y] = 0;
            else dp[x][y] = dp[x][y+1] + dp[x+1][y];
            return rec_func(m, n, x, y-1, dp, mx);

    }
    unsigned long long uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        if ((obstacleGrid[m-1][n-1] == 1) || (obstacleGrid[0][0] == 1)) return 0;
        
        if ((m == 1) || (n == 1)){
            for (auto vec : obstacleGrid){
                for (auto i : vec){
                    if (i == 1) return 0;
                }
            }
            
            return true;
            
        }
        
        vector<vector<unsigned long long>> dp(m, vector<unsigned long long> (n, 0));

        int x = m-1, y = n-1;
        dp[x][y] = 1;
        rec_func(m, n, x, y-1, dp, obstacleGrid);

        return dp[0][0];

    }

};


unsigned long long main(){
    
    return 0;
}