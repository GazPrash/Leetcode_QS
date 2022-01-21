#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

void recc(TreeNode* root){
    if (root){
        TreeNode* store = root->left; 
        root->left = root->right;
        root->right = store;

        recc(root->left);
        recc(root->right);
    }
}

TreeNode* invertTree(TreeNode* root) {

    if (root){
        TreeNode* strt = root;
        recc(root);
        return strt;
    }

    return nullptr;


}

int main(){
    
    return 0;
}