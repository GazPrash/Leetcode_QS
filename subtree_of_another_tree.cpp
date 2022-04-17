#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    TreeNode* findSubTree(TreeNode* node, TreeNode* subRoot){
        if (!node) return nullptr;
        if (node->val == subRoot->val) return node;
        else {
            auto l = findSubTree(node->left, subRoot);
            auto r = findSubTree(node->right, subRoot);
            return (l == nullptr ? r : l);
        }
    }

    int dfs(TreeNode* node){
        if (!node) return 0;
        return 1 + (dfs(node->left) + dfs(node->right));

    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        auto node = root;
        auto storeSub = findSubTree(node, subRoot);

        return (dfs(storeSub) == dfs(subRoot));

    }
};

int main(){
    
    return 0;
}