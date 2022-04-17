#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> possibleDirs = {
        {1, 1},
        {1, 0},
        {0, 1},
        {0, -1},
        {-1, 0},
        {-1, 1},
        {1, -1},
        {-1, -1},
    };

    int updateBoard(vector<vector<int>> const& orgBoard, int i, int j){
        cout<<i<<"----"<<j<<endl;
        if (i >= orgBoard.size() ||
            j >= orgBoard[0].size() ||
            i < 0 ||
            j < 0
        ) return 0;

        if (orgBoard[i][j] == 1) return 1;
        return 0;

    }

    void gameOfLife(vector<vector<int>>& board) {
        auto const referBoard = board;

        for (int i =0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                // cold and frosty mornin
                int nearAlive = 0;
                for (auto dir : possibleDirs){
                    nearAlive += updateBoard(referBoard, i+dir[0], j+dir[1]);
                }

                auto cell = referBoard[i][j];
                if (nearAlive == 3 && cell == 0){
                    board[i][j] = 1;
                } else if (cell == 1 && (nearAlive > 3 || nearAlive < 2)){
                    board[i][j] = 0;
                }
            }
        }

    }
};

int main(){
    
    return 0;
}