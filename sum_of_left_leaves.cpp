#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

};

class Solution {
public:
    int rec_count(TreeNode* node, int csum, int dir){

        if (node->left){
            csum += rec_count(node->left, 0, 0);
        }
        if (node->right){
            csum += rec_count(node->right, 0, 1);
        }
        else if (!(node->left) && (!node->right)) csum += node->val;

        return csum;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int csum = 0;
        if (root->left){
            csum += rec_count(root->left,0, 0);
        }
        if (root->right){
            csum += rec_count(root->right,0, 1);
        }

        return csum;
    }
};


int main(){
    
    return 0;
}