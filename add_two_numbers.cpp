#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool l1_exaust = 0, l2_exaust = 0;
        int cursum, carry = 0, iter = 0;
        ListNode* sumList = new ListNode;
        ListNode* storehead = sumList;

        while (l1 || l2){

            if (!l1) l1_exaust = 1;
            if (!l2) l2_exaust = 1;

            cursum += (l1 ? l1->val : 0);
            cursum += (l2 ? l2->val : 0);
            cursum += carry;

            if (cursum > 9){
                string strnum = to_string(cursum);
                carry = strnum[0]-'0', cursum = (strnum[1]-'0');
            }

            if (!l1_exaust) l1 = l1->next;
            if (!l2_exaust) l2 = l2->next;
            if (iter == 0){
                sumList->val =cursum;
                iter = -1;
                continue;
            }

            auto new_node = new ListNode;
            new_node->val = cursum;
            sumList->next = new_node;
            sumList = sumList->next;
        }
        if (carry != 0){
            auto lastnode = new ListNode;
            lastnode->val = carry;
            sumList->next = lastnode;
            lastnode->next = nullptr;
        } else {
            sumList->next = nullptr;
        }
        return storehead;

    }
};

int main(){
    
    return 0;
}