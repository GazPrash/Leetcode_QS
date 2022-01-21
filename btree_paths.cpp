#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

void rectree(TreeNode* node, vector<string> &out, string path){
    if (!node){
        out.push_back(path);
        return;
    }

    if (node->left){
        path += (to_string(node->val) + "->" + to_string(node->left->val));
        rectree(node->left, out, path);
    }
    if (node->right){
        path += (to_string(node->val) + "->" + to_string(node->right->val));
        rectree(node->right, out, path);
    }

}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> out;
    string val = "";
    rectree(root->left, out, val);
}

int main(){
    
    return 0;
}