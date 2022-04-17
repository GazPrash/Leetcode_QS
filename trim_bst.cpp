#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

};

class Solution {
public:
    TreeNode* dfs(TreeNode* node, int lo, int hi){
        if (!node) return nullptr;

        if (node->val < lo) return dfs(node->right, lo, hi);
        if (node->val > hi) return dfs(node->left, lo, hi);

        node->left = dfs(node->left, lo, hi);
        node->right = dfs(node->right, lo, hi);

        return node;
    }

    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return dfs(root, low, high);
    }
    
};

int main(){
    
    return 0;
}