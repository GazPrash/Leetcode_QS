#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
};


class Solution {
public:
    vector<int> totals;
    int dfs(TreeNode* node){
        if (!node) return 0;
        int left = dfs(node->left);
        int right = dfs(node->right);
        int local = abs(left-right);

        totals.push_back(local);
        node->val += (right+left);
        return node->val;
    }

    int findTilt(TreeNode* root) {
        dfs(root);
        int out = 0;
        for (int k  :totals) out+=k;

        return out;
    }
};

int main(){
    
    return 0;
}