#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node* random;

    Node(int value){
        int val = value;
        Node* next = nullptr;
        Node* random= nullptr;
    }

};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        vector<int> vals;
        vector<Node*> nodes;
        int i = 0;
        Node* store_head;
        while (head){
            Node* new_node = new Node(head->val);
            if (i == 0) store_head = new_node;
            // new_node->val = head->val;
            if (head->random) {nodes.push_back(new_node); vals.push_back(head->random->val);}
            else new_node->random = nullptr;

            Node* next_node;
            head = head->next;
            if (head){
                new_node->next = next_node;
                if (head->random){
                    nodes.push_back(new_node);
                    vals.push_back(head->random->val);
                }
            }
            else{
                new_node->next= nullptr;
            }
            i++;
            
        }
        int iter = 0;
        for (auto nd : nodes){
            // cout<<vals[iter]<<endl;
            auto temp_node = store_head;
            while (temp_node->val != vals[iter]){
                temp_node = temp_node->next;
            }
            nd->random = temp_node;
            iter++;
        }

        return store_head;
    }
};

int main(){
    
    return 0;
}