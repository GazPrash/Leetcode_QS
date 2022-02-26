#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

};

class Solution {
public:
    bool func_rec(TreeNode* root, int side, int last_root_val){
        if (!root) return 1;
        if ((!root->left) && (!root->right)) return 1;
        if (!root->left) return (root->right->val > root->val);
        if (!root->right) return (root->left->val < root->val);

        bool valid = side ? (root->left->val > last_root_val) : (root->right->val < last_root_val);
        if (((root->val) > root->left->val) && 
            ((root->val) < root->right->val) && (valid)){
                return func_rec(root->left, 0, root->val) && func_rec(root->right, 1, root->val);
            }

        return 0;
    }

    bool isValidBST(TreeNode* root) {
        if (!root) return 0;
        if (root->left){
            if (!(root->left->val < root->val)) return false;
        }
        if (root->right){
            if (!(root->right->val > root->val)) return false;
        }
        return (func_rec(root->left, 0, root->val) && func_rec(root->right, 1, root->val));

    }
};


int main(){
    
    return 0;
}