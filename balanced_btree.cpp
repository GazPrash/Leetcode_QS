#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    bool finalAnswer = true;
    int dfs(TreeNode* node, int csum){
        if (!node) return 0;
        csum += 1;

        int lsum = dfs(node->left, csum);
        int rsum = dfs(node->right, csum);

        if (abs(lsum - rsum) > 1) {finalAnswer = false;}
        return (lsum + rsum);

    }

    bool isBalanced(TreeNode* root) {
        dfs(root, 0);
        return finalAnswer;

    }
};

int main(){
    
    return 0;
}