#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    /* data */
    int val;
    TreeNode* left;
    TreeNode* right;

};

bool iSRec(TreeNode* left, TreeNode* right){
    if (!left && !right){
        return true;
    }
    if ((left->val) != (right->val)) return false;
    else{
        return (iSRec(left->left, left->right) && iSRec(right->left, right->right));
    }
}

bool isSymmetric(TreeNode* root) {
    if (!root){
        return false;
    }

    return iSRec(root->left, root->right);
}

int main(){
    
    return 0;
}