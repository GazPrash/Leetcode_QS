#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int paths = 0;
    int rec_func(vector<vector<int>> &mx, int m, int n, vector<vector<int>> &dp){
        int local_paths = 0;

        if (mx[m][n] == 1) return 1;
        if ((m) < (mx.size() -1)){
            if (dp[m+1][n] == 0){               
                local_paths = rec_func(mx, m+1, n, dp);
                paths += local_paths;
                dp[m+1][n] = local_paths;
            }
            else
                paths += dp[m+1][n];
        }
        if ((n) < (mx[0].size() -1)){
            if (dp[m][n+1] == 0){
                local_paths = rec_func(mx, m, n+1, dp);
                paths += local_paths;
                dp[m][n+1] = local_paths;
            }
            else
                paths += dp[m][n+1];
        }
        
        return 0;

    }

    int uniquePaths(int m, int n) {
        if ((m == 1) && (n == 1)) return 1;
        vector<vector<int>> mx(m, vector<int> (n, 0));
        vector<vector<int>> dp(m, vector<int> (n, 0));

        mx[0][0] = -1; // player
        mx[m-1][n-1] = 1; // exit

        rec_func(mx, 0, 0, dp);
        return paths;

    }
};

class Solution2 {
public:
    void rec_func(vector<vector<int>> &mx, int x, int y, vector<vector<int>> &dp){
        if (y == 0){
            dp[x][y] = dp[x][y+1];
            rec_func(mx, x-1, y+(mx[0].size()-1), dp);
        }

        else if (x == (mx.size()-1)){
            dp[x][y] = dp[x][y+1];
            rec_func(mx, x, y-1, dp);
        }

        else dp[x][y] = dp[x][y+1] + dp[x+1][y];

    }
    int uniquePaths(int m, int n) {
        if ((m == 1) && (n == 1)) return 1;
        vector<vector<int>> mx(m, vector<int> (n, 0));
        vector<vector<int>> dp(m, vector<int> (n, 0));

        int x = m-1, y = n-2;
        dp[x][y] = 1;
        rec_func(mx, x, y-1, dp);

        return dp[0][0];

    }

};


int main(){
    
    return 0;
}