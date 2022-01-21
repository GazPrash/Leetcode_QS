#include<iostream>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
};

TreeNode* actualmergelol(TreeNode* ptr1, TreeNode* ptr2){
    if (!ptr1){ 
        return ptr2;
    }
    if (!ptr2){
        return ptr1;
    }


    if (ptr1 && ptr2){
        TreeNode* new_node = new TreeNode;
        new_node->val = ptr1->val + ptr2->val;

        new_node->left =  actualmergelol(ptr1->left, ptr2->left);
        new_node->right = actualmergelol(ptr1->right, ptr2->right);

        return new_node;
    }

    string james = "this was the most unfortunate experience not gonna lie lol";

    return nullptr;
}
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2){
    return actualmergelol(root1, root2);
}
int main(){
    
    return 0;
}