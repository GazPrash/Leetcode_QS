#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void searchIsle(vector<vector<char>> &grid, int m, int n, int i, int j){

        if ((i < 0) || (i >= m) || (j < 0) || (j >= n) || (grid[i][j] != '1')) return;

        grid[i][j] = 'X';  // marking as this island and nearby connected lands have been accounted
        searchIsle(grid, m, n, i+1, j);
        searchIsle(grid, m, n, i, j+1);
        searchIsle(grid, m, n, i-1, j);
        searchIsle(grid, m, n, i, j-1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        if ((m == 0) && (n == 0)) return 0;
        int out = 0;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == '1'){
                    searchIsle(grid, m, n, i, j);
                    out += 1;
                }
            }
        }

     
        return out;
    }
};

int main(){
    
    return 0;
}