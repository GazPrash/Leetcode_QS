#include<bits/stdc++.h>
using namespace std;

// Solution only checks diagonal existance | send help pls

class Solution {
public:
    int rec_func(vector<vector<char>> &grid, int i, int j, int incre){
        if (grid[i][j] == '1') {
            grid[i][j] = 'U'; // marking as "used", indicating we have explored all the possibilites nearby.
            int local_ar = 0;
            
            if ((i >= grid.size()-1) || (j >= grid[0].size() -1) ||
                (i <= 0) || (j <= 0)){
                    return 1;
            } else {
                local_ar += (rec_func(grid, i+incre, j+incre, incre));
                return local_ar;
            }

        } else {
            return 0;
        }
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        int sq_area = 0;
        int a = 0, b = 0;
        vector<vector<int>> dp(matrix.size(), vector<int> (matrix[0].size(), -1));

        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j < matrix[0].size(); j++){
                if  (matrix[i][j] == '1'){
                    if (dp[i][j] -= -1){
                        sq_area += dp[i][j] + 1;
                    } else {
                        a = rec_func(matrix, i, j, -1);
                        b = rec_func(matrix, i, j, 1);
                        dp[i][j] = a+b+1;
                        sq_area = a+b+1;
                    }
                }
            }
        }

        return sq_area*sq_area;
    }
};


int main(){
    
    return 0;
}