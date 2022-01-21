#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    while(root){ 
        if ((p->val > root->val) && (q->val > root->val)) root = root->right;
        else if ((p->val < root->val) && (q->val < root->val)) root = root->left;
        else return root;
    }
}

int main(){
    
    return 0;
}