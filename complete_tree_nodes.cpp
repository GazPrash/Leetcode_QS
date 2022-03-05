#include<bits/stdc++.h>
using namespace std;

// Main Solution | Accepted | Simple Recursion | O(n) | 

class Solution1 {
public:
    int rec_func(TreeNode* node){
        if (!node) return 0;
        int out = 1;
        if (node->left){
            out += rec_func(node->left);
        }
        if (node->right){
            out += rec_func(node->right);
        }
        return out;

    } 

    int countNodes(TreeNode* root) {
        return rec_func(root);

    }
};


// Alternative Solution | Using the height of the tree | O(logn * logn) | Yet to implement
// TODO


// Dynamic programming is basically not being used here so the below solution although will work,
// but it's just a waste of space | Also (O(n))
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

struct node_bind{
    int val = -1;
};

class Solution {
public:
    int rec_func(TreeNode* node, unordered_map<TreeNode*, node_bind> &dpm){
        if (!node) return 0;
        
        int out = node->val;
        if (node->left){
            if (dpm[node->left].val != -1){
                out += dpm[node->left].val;
            } else {
                out += rec_func(node->left, dpm);
                dpm[node->left].val = out;
            }
        }

        if (node->right){
            if (dpm[node->right].val != -1){
                out += dpm[node->right].val;
            } else {
                out += rec_func(node->left, dpm);
                dpm[node->right].val = out;
            }

        }

        return out;

    } 

    int countNodes(TreeNode* root) {
        unordered_map<TreeNode*, node_bind> dp_map;
        return rec_func(root, dp_map);

    }
};

int main(){
    
    return 0;
}