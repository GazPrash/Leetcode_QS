#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    
};


class Solution {
public:
    void rec_func(vector<int> arr, int node_dir, TreeNode* prev){
        int mx = *max_element(arr.begin(), arr.end());
        vector<int> left;
        vector<int> right;

        TreeNode* new_node;
        if (node_dir != -1){
            new_node = new TreeNode;
            if (node_dir){
                prev->right = new_node;
            } else prev->left = new_node;
        } else {
            new_node = prev;
        }
        new_node->val = mx;

        bool left_on = 1;
        for (int k : arr){
            if (k == mx){
                left_on = 0;
                continue;
            }
            if (left_on){
                left.push_back(k);
            }
            else{
                right.push_back(k);
            }
        }
        

        if (left.size() == 1){
            TreeNode* nextl = new TreeNode;
            new_node->left = nextl;
            nextl->val = left[0];
        }
        else if (left.size() == 0){
            new_node->left = nullptr;
        }
        else{
            rec_func(left, 0, new_node);
        }
        
        if (right.size() == 1){
            TreeNode* nextr = new TreeNode;
            new_node->right = nextr;
            nextr->val = right[0];
        } 
        else if (right.size() == 0){
            new_node->right = nullptr;
        }
        else{
            rec_func(right, 1, new_node);
        }

    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* head = new TreeNode;
        rec_func(nums, -1, head);

        return head;

    }
};


int main(){
    
    return 0;
}