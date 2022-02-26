#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

};


class Solution {
public:
    vector<string> out;
    void rec_func(TreeNode* node, string num_str){
        num_str += to_string(node->val);
        
        if ((!node->left) && (!node->right)){
            out.push_back(num_str);
            return;
        }
        if (node->left) rec_func(node->left, num_str);
        if (node->right) rec_func(node->right, num_str);

    } 

    int sumNumbers(TreeNode* root) {
        string temp;
        long long num_out = 0;
        rec_func(root, temp);
        for (string k : out) num_out += stoul(k);
    
        return num_out;
    }
};

int main(){
    
    return 0;
}