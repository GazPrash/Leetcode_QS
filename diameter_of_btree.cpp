#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};


class Solution {
public:
    map<TreeNode*, vector<int>> tree_dp;
    int dfs(TreeNode* node, int len){
        if (!node) return 0;
        len++;
        int temp1 = dfs(node->left, len), temp2 =  dfs(node->right, len);
        int len_divide = (max(temp1, temp2));
        int len_total = temp1 + temp2;
        auto tree_vec = tree_dp[node];
        tree_vec.push_back(len + len_total);
        tree_vec.push_back(len + len_divide);

        return (len + len_divide);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return dfs(root, 0)-1;
    }
};

// Alternate soln using backtracking from the leaf node

class Solution {
public:
    int max_dia = 0;
    int dfs(TreeNode* node){
        if (!node) return -1;
        int lheight = dfs(node->left);
        int rheight = dfs(node->right);
        max_dia = max(max_dia, lheight + rheight + 2);
        
        return 1 + max(rheight, lheight);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return max_dia;
    }
};

int main(){
    
    return 0;
}