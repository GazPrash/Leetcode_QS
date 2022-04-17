#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int traverse(string &tree, int ind, int total_children){
        if (ind >= tree.length()){
            return total_children == 0 ? 1 : 0;
        }
        if (tree[ind] == ',') return traverse(tree, ind+1, total_children);
        if ((ind+1) < tree.length()){
            if (tree[ind] != '#'){
                while ((tree[ind+1] != ',') && ((ind+1) < tree.length())){
                    ind++;
                }
            }
        }
        if (tree[ind] != '#'){
            if (total_children == 0) return 0;
            total_children--;
            return traverse(tree, ind+1, total_children+2);
        } else {
            total_children--;
            if ((ind+1) >= tree.length()){
                return total_children == 0 ? 1 : 0;
            }
            if (tree[ind+1] == '#'){
                total_children--;
            }
            return traverse(tree, ind+1, total_children);

        }
        return -1;
    }

    bool isValidSerialization(string preorder) {
        if (preorder[0] == '#' && preorder.length() == 1) return true;
        else if (preorder[0] == '#' && preorder.length() > 1) return false;
        else return traverse(preorder, 1, 2);
    }
};


int main(){
    
    return 0;
}


//             4
//       2             7
// 
//    8      1        0          9
// #    #  #    #  #    #     #    #
// 
//   PRE 428##1##70##9##
// 