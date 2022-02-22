#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> vec(matrix[0].size(), 0);
        vector<vector<int>> track;

        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j < matrix[0].size(); j++){
                if (matrix[i][j] == 0)
                    track.push_back({i, j});
            }
        }

        for (auto pr : track){
            matrix[pr[0]] =  vec;
            int i = 0;
            while (i < matrix.size()){
                matrix[i][pr[1]] = 0;
                i++;
            }
        }

    }
};

int main(){
    
    return 0;
}