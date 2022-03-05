#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {    
        int peri = 0;
        int deduct = 0;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1){
                    peri += 4;
                    if (i > 0 && grid[i-1][j] == 1) deduct++;
                    if (j > 0 && grid[i][j-1] == 1) deduct++;
                    if (i < (grid.size()-1) && grid[i+1][j] == 1) deduct++;
                    if (j < (grid[0].size()-1) && grid[i][j+1] == 1) deduct++;
                    peri -= deduct;
                    deduct = 0;
                }
            }
        }

        return peri;
        
    }
};

int main(){
    
    return 0;
}