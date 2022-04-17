#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    vector<int> bst_array;
    void inorder(TreeNode* node){
        if (!node) return;
        inorder(node->left);
        bst_array.push_back(node->val);
        inorder(node->right);
    }

    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int min_diff = INT_MAX, temp;
        for (int i = 0; i < bst_array.size()-1; i++){
            temp = abs(bst_array[i] - bst_array[i+1]);
            min_diff = min(min_diff, temp);
        }

        return min_diff;

    }
};

int main(){
    
    return 0;
}