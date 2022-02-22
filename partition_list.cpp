#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if ((!head) || (!head->next)) return head;
        unordered_map<ListNode*, int> node_pos;
        auto store_head = head;
        ListNode*  store_target;
        while (store_head){
            if (store_head->val == x) {
                store_target = store_head;
                node_pos[store_head] = 1;

            }
            else if (store_head->val > x){
                node_pos[store_head] = 1;
            }

            store_head = store_head->next;

        }
        vector<ListNode*> big_nodes;

        auto temp_store = head;
        while ((node_pos[head] == 1)){
            big_nodes.push_back(head);
            head = head->next;
        }
        auto new_head = head;

        // the check below is made to ensure not all the nodes are traversed, that would
        // mean that the llist consists of nodes all with the same value, so we can send the 
        // llist as it is by preserving the head in temp_store.
        if (head){
            while (head->next){
                if (node_pos[head->next] == 1){
                    big_nodes.push_back(head->next);
                    head->next = (head->next->next);
                    continue;
                }
                head = head->next;
            }
            
            for (auto node : big_nodes){
                    head->next = node;
                    head = head->next;
                }

            // head mustve been traversed till the last valid node, so it's next must point to nullptr.
            head->next = nullptr;
            return new_head;

        }
        else{
            return temp_store;
        }
        
    }
};

int main(){
    return 0;
}