#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        int n = 0;
        vector<vector<double>> tower;

        for (int i = 0; i < query_row; i++){
            for (int j = 0; j <= n; j++){
                if (i == 0 && j == 0){
                    tower[i].push_back(poured);
                } else{
                    if (j == 0 || j == n){
                        tower[i].push_back((tower[i-1][j]-1)/2);
                    } else {
                        tower[i].push_back((tower[i-1][j-1] + tower[i-1][j+1] -2)/2);
                    }
                }
            }
            n++;

        }

        return tower[query_row][query_glass];

    }
};


int main(){
    
    return 0;
}