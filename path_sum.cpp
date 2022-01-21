#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
// int rec_find(TreeNode *node, int csum, int tsum)
// {
//     if (!node){
//         return (csum == tsum);
//     }

//     else{
//         csum += node->val;
//         if ((csum == tsum) && (node->left == nullptr) && (node->right == nullptr)) return true;
//         else{
//             return (rec_find(node->left, csum, tsum)) || (rec_find(node->right, csum, tsum)); 
//         }
//     }

// }

// bool hasPathSum(TreeNode *root, int targetSum)
// {
//     int csum = 0;
//     return rec_find(root, csum, targetSum);
  
// }

// int main()
// {

//     return 0;
// }



// Alternate approach ----------->

bool hasPathSum(TreeNode *root, int targetSum){
    if (!root) return false;
    if (root->val == targetSum) return false;

    return hasPathSum(root->left, targetSum-root->val) || hasPathSum(root->left, targetSum-root->val);


}


int main(){


    return 0;

}


