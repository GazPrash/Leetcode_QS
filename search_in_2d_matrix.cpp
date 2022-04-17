#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // 1 2 3 4 5
        // 6 7 8 9 10
        int N = matrix.size(), j = matrix[0].size();
        int lo =0, hi = N-1 * j + (j-1), mid, element;

        while (lo <= hi){
            int mid_flat = lo - (lo-hi)/2;
            int row = mid/j, col = mid%j;
            element = matrix[row][col];

            int mid_row = mid_flat/j, mid_col = mid_flat%j;
            mid = matrix[mid_row][mid_col];

            if (element == mid){
                return true;
            } else if (element > mid){
                lo = mid_flat +1;
            } else hi = mid_flat-1;

        }

        return false;

    }
};

int main(){
    
    return 0;
}