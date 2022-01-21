#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

bool isSameTree(TreeNode* p, TreeNode* q) {
    bool leftdone = false;
    bool rightdone = false;

    if (p->left && q->left){
        return isSameTree(p->left, q->left);
    }
    else if ((p->left == nullptr) && (q->left == nullptr)){
        if (p->val == q->val){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }

    if (p->right && q->right){
        return isSameTree(p->left, q->left);
    }
    else if ((p->right == nullptr) && (q->right == nullptr)){
        if (p->val == q->val){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int main(){

    
    return 0;
}