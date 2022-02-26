#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;

        ListNode* store_left;
        ListNode* store_preleft;
        ListNode* store_postright;
        ListNode* store_right;

        bool collection = false;
        bool exchange_heads = false;
        if (left == 1){
            store_preleft = head;
            store_left = head->next;
            collection = true;
            exchange_heads = true;
        }
        auto store_head = head;
        auto store_head2 = head;
        int iter = 0, jiter = 0;
        vector<ListNode*> collect_nodes;
        while (head){
            iter++;

            if (collection) collect_nodes.push_back(head);

            if (iter == (left-1)){
                store_preleft = head;
                store_left = head->next;
                collection = true;

            }

            if (jiter == (right-1)){
                store_right = head;
                store_postright = head->next;
                collection = false;
            }

            jiter++;
            head = head->next;
        }
        
        store_preleft->next = store_right;
        store_left->next = store_postright;
        store_head = store_postright;
        
        for (int i = collect_nodes.size()-1; i >= 0; i--){
            if (i == 0){
                collect_nodes[i]->next = store_head;
                break;
            }
            collect_nodes[i]->next = collect_nodes[i-1];

        }

        if (exchange_heads) return collect_nodes[collect_nodes.size() - 1];
        return store_head2;

    }
};

int main(){
    
    return 0;
}