#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> new_dir(vector<int> posn, vector<vector<int>> matrix);
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<vector<int>> dirs = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};
        vector<int> out;
        vector<int> startdir = dirs[0];
        vector<int> posn = {0, 0};

        while (((posn[0] >= 0) && (posn[0]) < matrix.size()) && 
        ((posn[1] >= 0) && (posn[1] < matrix[0].size()))){
            if (posn[0] == matrix.size()-1){
                if (posn[1] == matrix[0].size()-1){
                    startdir = dirs[2];
                    out.push_back(matrix[posn[0]][posn[1]]);
                    posn[0] += startdir[0];
                    posn[1] += startdir[1];
                    continue;
                }
                else
                    startdir[1];
            }
            if (posn[0] <= 0){
                if (posn[1] <= 0){

                }
            }

            posn[0] = (abs(startdir[0]) == 1) ? posn[0] += startdir[0] : posn[0];
            posn[1] = (abs(startdir[1]) == 1) ? posn[1] += startdir[1] : posn[1];
            out.push_back(matrix[posn[0]][posn[1]]);
        }
    }
};

int main()
{

    return 0;
}