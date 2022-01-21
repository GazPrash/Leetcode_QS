#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}

int recursive(vector<vector<int>> &mat, int rown, int coln, int i, int j)
{
    vector<vector<int>> ans;
    vector<int> subans;

    if (mat[i][j] == 1)
    {
        if (j > 0 && mat[i][j - 1] == 0)
        {
            return 1;
        }
        else if (j < coln && mat[i][j + 1] == 0)
        {
            return 1;
        }
        else if (i > 0 && mat[i - 1][j] == 0)
        {
            return 1;
        }
        else if (i < rown && mat[i + 1][j] == 0)
        {
            return 1;
        }

        else
        {
            return min(
            {recursive(mat, rown, coln, i, j), 
            recursive(mat, rown, coln, i, j), 
            recursive(mat, rown, coln, i, j), 
            recursive(mat, rown, coln, i, j)},
            comp
            );
        }
    }
}

vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
{
    int rown = mat.size();
    int coln = mat[0].size();

    recursive(mat, rown, coln, 0, 0);
}

int main()
{

    return 0;
}