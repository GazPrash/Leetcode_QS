#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int k1 = c;
        int k2 = r;
        vector<vector<int>> out;
        for (int i = 0; i < mat.size(); i++){
            vector<int> temp;
            for (int j = 0; j < mat[0].size(); j++){
                if (k1 > 0){
                    temp.push_back(mat[i][j]);
                    k1--;
                } else {
                    k1 = c;
                    out.push_back(temp);
                    temp.clear();
                }
            }
        }
        return out;
        
    }
};

int main(){
    
    return 0;
}