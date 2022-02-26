#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};

class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> nodes;
        int n = 0;
        auto store_head = head;
        while (head){
            if (head != store_head) nodes.push_back(head);
            head = head->next;

        }

        for (int i = nodes.size()-1; i >=0; i++){
            cout<<store_head->val<<endl;
            auto store_node = store_head->next;

            if (store_node == nodes[i]){
                store_head = store_head->next;
                continue;

            }

            if (!store_node){
                store_head->next = nodes[i];
                store_head->next->next = nullptr;
                break;
            }
            store_head->next = nodes[i];
            store_head = store_head->next;
            store_head->next = store_node;
            store_head = store_head->next;
        }

    }
};

int main(){
    
    return 0;
}