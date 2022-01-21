// Populate each next pointer to point to its next right node. If there is no next right node,
// the next pointer should be set to NULL.
// Initially, all next pointers are set to NULL

#include<iostream>
using namespace std;

class Node {
    public:
        int val;
        Node* left;
        Node* right;
        Node* next;
};

void left_connect(Node* root, Node* top_right){
    if (root->left){
        root->left->next = root->right;
        root->right->next = top_right->left;
        left_connect(root->left, top_right->left);
    }
}

void right_connect(Node* root){
    if (root->right){
        root->left->next = root->right;
        root->right->next = nullptr;

        right_connect(root->right);
    }
}


Node* connect(Node* root){
    if (root == nullptr) return nullptr;

    if (root->left == nullptr){
        root->next = nullptr;
        return root;
    }

    root->left->next = root->right;
    root->right->next = nullptr;
    left_connect(root->left, root->right);
    right_connect(root->right);
    return root;
}
int main(){
    
    return 0;
}


// Input
// [-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13]
// Output
// [-1,#,0,1,#,2,3,4,5,#,6,7,#]
// Expected
// [-1,#,0,1,#,2,3,4,5,#,6,7,8,9,10,11,12,13,#]