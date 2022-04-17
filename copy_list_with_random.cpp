#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node* random;

    Node(int _val){
        val = _val;
    }

};

struct NodeAddr{
    Node* addr = nullptr;
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        vector<int> val_list;
        vector<int> rand_list;
        int nodes = 0;
        auto storehead = head;
        while (storehead){
            val_list.push_back(storehead->val);
            if (storehead->random) rand_list.push_back(storehead->random->val);
            else rand_list.push_back(-1);
            storehead = storehead->next;
            nodes++;
            
        }
        int ind = 0;
        Node* last_node = nullptr, *store_final_head;
        unordered_map<int, NodeAddr> randomPtrDone;
        while (ind < val_list.size()){
            if (randomPtrDone[rand_list[ind]].addr != nullptr && rand_list[ind] != -1){
                auto new_node = randomPtrDone[ind].addr;

                Node* new_random = new Node(rand_list[ind]);
                new_node->random = new_random;
                randomPtrDone[new_random->val].addr = new_random;

                last_node->next = new_node;
                last_node = last_node->next;
                ind++;
                continue;

            }
            cout<<rand_list.size()<<endl;

            Node* new_node = new Node(val_list[ind]);
            if (rand_list[ind] == -1){
                new_node->random = nullptr;
            }
            else {
                Node* new_random = new Node(rand_list[ind]);
                randomPtrDone[new_random->val].addr = new_random;
                new_node->random = new_random;
            }

            if (!last_node){
                last_node = new_node;
                store_final_head = new_node;
            }
            else {
                last_node->next = new_node;
                last_node = last_node->next;
            }

            ind++;
            
        }

        return store_final_head;

    }
};

// billie jean

int main(){
    
    return 0;
}