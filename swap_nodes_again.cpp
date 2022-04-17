#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};


class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if (!head->next) return head;
        auto storehead1 = head;
        auto storehead2 = head;
        int len = 0;

        while (storehead1){
            storehead1 = storehead1->next;
            len++;
        }
        int cntr = 1, back_k = len-k+1;
        int val1 =-1, val2 = -1, val2_changed = 0;
        ListNode* node1, *node2;

        while (head){
            if (cntr == k){
                val1 = head->val;
                node1 = head;
            }
            else if (cntr == back_k){
                val2 = head->val;
                node2 = head;
            }
            head = head->next;
            cntr++;
        }

        node1->val = val2;
        node2->val = val1;

        return storehead2;

    }
};

int main(){
    
    return 0;
}