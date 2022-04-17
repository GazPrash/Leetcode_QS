#include<bits/stdc++.h>
using namespace std;


struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

// Original soln - Not Accepted


struct defVal{
    int value = -1;
};

class Solution {
public:
    unordered_map<TreeNode*, defVal> valDP;
    int partialDFS(TreeNode* node, int tsum){

        if (!node) return tsum;
        if (valDP[node].value != -1) return valDP[node].value;

        tsum += node->val;
        tsum += (partialDFS(node->left, 0) + partialDFS(node->left, 0));
        return tsum;

    }

    void dfs(TreeNode* node){
        if (!node) return;

        valDP[node].value = partialDFS(node->right, 0) + node->val;
        node->val = valDP[node].value;

        dfs(node->left);
        dfs(node->right);
    }

    TreeNode* convertBST(TreeNode* root) {
        dfs(root);
        return root;
    }
};


// Alternate Soln | Accepted 
// Concept : Just go right all the way and then traverse up the tree
// while going up if you find a left branch, travel there and update
// it with the total sum along the way.

class Solution{
public:
    int tsum = 0;
    void nextRightNode(TreeNode* node){
        if (!node) return;
        nextRightNode(node->right);

        tsum += node->val;
        node->val = tsum;
        if (node->left) nextRightNode(node->left);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        nextRightNode(root);
        return root;
    }

};


int main(){
    
    return 0;
}