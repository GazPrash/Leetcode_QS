#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

};

class Solution {
public:
    vector<vector<int>> out;
    void rec_func(TreeNode* node, int csum, int tsum, vector<int> track){
        csum += node->val;
        track.push_back(node->val);

        if (!node->left && !node->right){
            if (csum == tsum) out.push_back(track);
            else track.clear();
            return;
        }

        if (node->left){
            vector<int> fleft;
            rec_func(node->left, csum, tsum, fleft);
        }
        
        if (node->right){
            vector<int> fright;
            rec_func(node->right, csum, tsum, fright);
        }

    }


    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        rec_func(root, 0, targetSum, temp);

        return out;
        
    }
};

int main(){
    
    return 0;
}