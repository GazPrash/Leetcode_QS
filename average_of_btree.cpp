#include<bits/stdc++.h>
using namespace std;


struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};


class Solution {
public:
    vector<double> out;
    void dfs(TreeNode* node){
        if (!node) return;
        double curr;
        bool left_ex = false, right_ex = false;
        if (node->left){
            curr += node->left->val;
            left_ex = true;
        } 
        if (node->right){
            curr += node->right->val;
            right_ex = true;
        }
        if (left_ex && right_ex) curr /= 2;
        if (left_ex || right_ex) out.push_back(curr);

        if (left_ex || right_ex){
            if (left_ex) dfs(node->left);
            if (right_ex) dfs(node->right);
        }

    }
    vector<double> averageOfLevels(TreeNode* root) {
        out.push_back(root->val);
        dfs(root);

        return out;
        
    }
};

int main(){
    
    return 0;
}