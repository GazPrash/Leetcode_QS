#include<bits/stdc++.h>
using namespace std;


struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

// Soln using simple recursion

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if ((!root) || (root == p) || (root == q)) return root;

        TreeNode* n1 = lowestCommonAncestor(root->left, p, q);
        TreeNode* n2 = lowestCommonAncestor(root->right, p, q);

        if (n1 && n2) return root;
        else if (!n1){
            if (n2) return n2;
        }

        else if (!n2){
            if (n1) return n1;
        }
        else return nullptr;

    }
};


// Not Working | Alternate approach using vectors

class Solution2 {
public:
    vector<TreeNode*> actual1;
    vector<TreeNode*> actual2;

    bool p_found = false;
    bool q_found = false;

    void dfs(TreeNode* node, TreeNode* parent, vector<TreeNode*> &heritage, int &p, int &q){
        if (!node) return;
        heritage.push_back(parent);
        if (((node->val) == p) || ((node->val) == p)){
            if (node->val == p){
                actual1 = heritage;
                p_found = true;
            } else if (node->val == q){
                actual2 = heritage;
                q_found = true;
            }
        }
        if (p_found || q_found){
            vector<TreeNode*> out1; 
            vector<TreeNode*> out2; 
            dfs(node->left, node, out1, p, q);
            dfs(node->right, node, out2, p, q);
        }

        dfs(node->left, node, heritage, p, q);
        dfs(node->right, node, heritage, p, q);

    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> h1;
        vector<TreeNode*> h2;

        dfs(root->left, root, h1, p->val, q->val);
        dfs(root->right, root, h2,  p->val, q->val);

        TreeNode* most_recent = nullptr;
        for (int i = 0; i < min(actual1.size(), actual2.size()); i++){
            if (actual1[i] == actual2[i]) most_recent = actual1[i];
        }
        return most_recent;
    }
};

int main(){

    
    return 0;
}