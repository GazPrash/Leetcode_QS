#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution {
public:
    int treeRec(TreeNode* node, int counter){
        if (node){
            counter++;
            if (!(node->left) && !(node->right)){
                return counter;
            }
            return max(treeRec(node->left, counter), treeRec(node->right, counter));
        }

        return counter;

    }

    int maxDepth(TreeNode* root){

        if (!root) return 0;
        int counter = 1;

        return max(treeRec(root->left, counter), treeRec(root->right, counter));

    }
};