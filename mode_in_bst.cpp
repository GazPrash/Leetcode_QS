#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    unordered_map<int, int> d;

    void inorder(TreeNode* node){
        if (!node) return;
        inorder(node->left);
        d[node->val]++;
        inorder(node->right);
    }
    vector<int> findMode(TreeNode* root) {
        if (!root) return {};
        inorder(root);
        vector<int> out;
        int max_fq = -1;
        for (auto it = d.begin(); it != d.end(); it++){
            if (max_fq == -1) {max_fq = it->second; continue;}
            else if (max_fq <= it->second){
                max_fq = it->second;
            }

        }

        for (auto it2 = d.begin(); it2 != d.end(); it2++){
            if (it2->second == max_fq) out.push_back(it2->first);
        }

        return out;
    }
};

int main(){
    
    return 0;
}