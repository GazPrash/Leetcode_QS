#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal;
    for (int x = 0; x < numRows; x++){
        vector<int> k(x, 1);
        pascal.push_back(k);

    }

    for(int i = 0; i < pascal.size(); i++){
        int npasc = pascal[i].size();
        for (int j = 0; j < npasc; j++){
            if ((pascal[i][j] != 0) || (pascal[i][j] != npasc-1)){
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j+1];
            }
        }
    }

    return pascal;

}

int main(){
    
    return 0;
}