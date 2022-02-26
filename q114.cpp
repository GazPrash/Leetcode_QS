#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

};

class Solution {
public:
    TreeNode* prev_node;

    void flatten(TreeNode* root) {
        if (!root) return;

        flatten(root->left);
        flatten(root->right);

        root->right = prev_node;
        root->left = nullptr;
        prev_node = root;
        
    }
};


int main(){
    
    return 0;
}