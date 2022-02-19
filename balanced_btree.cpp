#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};


class Solution {
public:
    bool tree_mapper(TreeNode* node, int tick){
        bool out;
        if (tick < 0) return false;

        if (node->left){
            out = tree_mapper(node->left, tick-1);
        }


    }

    bool isBalanced(TreeNode* root) {
        int tick = 1;


        
    }
};


class Solution2 {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> out;

        int i = 1;
        while (i <= n){
            if ((i%5 == 0) && (i%3 == 0)) out.push_back("FizzBuzz");
            else if (i%3 == 0) out.push_back("Fizz");
            else if (i%5 == 0) out.push_back("Buzz");
            else out.push_back(to_string(i));
            i++;
        }

        return out;

    }
};

int main(){
    
    return 0;
}