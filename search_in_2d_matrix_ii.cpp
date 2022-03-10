#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool binarySearch(vector<int> &row, int &target){
        int l = 0, h = row.size()-1, m;

        while (l<= h){   
            m = l - (l-h)/2;
            if (row[m] == target) return true;
            else if (row[m] > target) h = m-1;
            else if (row[m] < target) l = m+1;
        }
        return false;

    }

    bool search_rec(vector<vector<int>> &grid, int target, int ind){
        if (binarySearch(grid[ind], target) )return true;
        else return (binarySearch(grid[ind-1], target) || binarySearch(grid[ind+1], target));
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix[0][0] > target) return false;
        if (matrix[0][0] == target) return true;

        int l = 0, h = matrix.size(), m;
        vector<int> temp;
        while (l < h){
            m = l - (l-h)/2;
            temp = matrix[m];
            if (temp[0] == target || temp[temp.size()-1] == target) return true;
            if (temp[0] < target){
                if (temp[temp.size() -1] < target) l = m + 1;
                else return search_rec(matrix, target, m);
            } else h = m-1;
        }
        return false;
    }
};

int main(){
    
    return 0;
}
