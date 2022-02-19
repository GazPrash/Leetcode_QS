#include<bits/stdc++.h>
using namespace std;

/*
 * clockwise rotate
 * first reverse up to down, then swap the symmetry 
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
 *
 *
 * anticlockwise rotate
 * first reverse left to right, then swap the symmetry
 * 1 2 3     3 2 1     3 6 9
 * 4 5 6  => 6 5 4  => 2 5 8
 * 7 8 9     9 8 7     1 4 7
*/


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // turn matrix on it head

        int l = 0, h = matrix.size()-1;

        while (l < h){
            swap(matrix[l], matrix[h]);
        }

        for (int i = 0; i < matrix.size(); i++){
            for (int j = i+1; j < matrix[0].size(); i++){
                if (i != j) swap(matrix[i][j], matrix[j][i]);
            }
        }
        
    }
};

int main(){
    
    return 0;
}