#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool find_word(vector<vector<char>>& board, int i, int j, string word, int word_ind){
        if(i < 0 || j < 0 || i > board.size()-1 || j > board[0].size()-1) return false; // boundary condns
        if (word_ind == word.length()) return true;
        if (board[i][j] != word[word_ind]) return false;

        bool out;
        board[i][j] = '*';
        out = (
            (find_word(board, i+1, j, word, word_ind+1)) ||
            (find_word(board, i-1, j, word, word_ind+1)) ||
            (find_word(board, i, j+1, word, word_ind+1)) ||
            (find_word(board, i, j-1, word, word_ind+1)) 
        );
        board[i][j] = word[word_ind];
        return out;

    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size()-1, n = board[0].size()-1;
        int word_ind = 0, finds = 0;

        vector<vector<int>> starters;
        for (auto i = 0; i < m; i++){
            for (auto j = 0; j < n; j++){
                if (find_word(board, i, j, word, 0)) return true;
            }
        }

        return false;
    }
};

int main(){
    
    return 0;
}