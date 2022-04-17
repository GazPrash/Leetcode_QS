#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    vector<Node*> neighbors;

};

struct defaultNode{
    Node* addr = nullptr;

};

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return node;

        unordered_map<int, defaultNode> mapnodes;
        auto store_node = mapnodes[node->val];
        if (store_node.addr == nullptr){
            mapnodes[node->val].addr = node;
            Node* new_node = new Node;
            new_node->val = node->val;

        }





    }
};

int main(){
    
    return 0;
}