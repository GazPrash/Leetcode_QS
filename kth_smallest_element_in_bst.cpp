#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    void inorder(TreeNode* node, vector<int> &arr){
        if (!node) return;
        inorder(node->left, arr);
        arr.push_back(node->val);
        inorder(node->right, arr);
    }

    int kthSmallest(TreeNode* root, int k) {
        if (!root) return 0;

        vector<int> vals;
        inorder(root, vals);

        for (int i = 0; i < vals.size(); i++){
            if (i == k - 1) return vals[i];
        }
        return -1;
    }
};

int main(){
    
    return 0;
}