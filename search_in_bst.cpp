#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root) return nullptr;
        if (val == root->val) return root;
        if (val > root->val) return searchBST(root->right, val);
        return searchBST(root->left, val);
    }
};

int main(){
    
    return 0;
}