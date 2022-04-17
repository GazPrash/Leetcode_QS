#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> out(grid.size(), vector<int> (grid[0].size(), 0));
        int rown, coln;

        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                rown = (i+(j+k)/grid[0].size())%grid.size();
                coln = (j+k)%grid[0].size();
                out[rown][coln] = grid[i][j];
            }
        }

        return out;

    }
};

int main(){
    
    return 0;
}