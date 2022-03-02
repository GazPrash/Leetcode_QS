#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

};

class Solution {
public:
    void rec_func(TreeNode* node){
        if (!node) return;

        if (node->right){
            
        }

    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> nodes;

        if (!root->right){
            while (root){
                nodes.push_back(root->val);
                root = root->left;
            }
            return nodes;
        }
        
        while (root){
            if (!root->right){

            }

            nodes.push_back(root->val);
            root = root->right;
        }
        
        return nodes;
    }
};


int main(){
    
    return 0;
}