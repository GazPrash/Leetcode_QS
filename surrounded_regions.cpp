#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void transform(vector<vector<char>> &board, int i, int j, int m, int n){

        if (((i-1 == 0) && (board[i-1][j] == 'O')) || ((i+1 == m-1) && (board[i+1][j] == 'O')) || ((j-1 == 0) && (board[i][j-1] == 'O')) || ((j+1 == n-1) && (board[i][j+1] == 'O'))){
            return;
        }

        board[i][j] == 'X';
        return;
    }

    void solve(vector<vector<char>> &board){
    vector<vector<int>> invalid;
        int m = board.size(), n = board[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 'O'){
                    transform(board, i, j, m, n);
                }
            }
        }

    }
};


int main()
{
    return 0;
}