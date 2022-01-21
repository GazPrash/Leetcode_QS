#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        ListNode* next;
        int val;

};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* head = new ListNode;
    ListNode* store_head = head;
    while (l1 != nullptr and l2!= nullptr){
        if (l1->val == l2->val){
            head = l1;
            head->next = l2;
            head = head->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        else if (l1->val > l2->val){
            head->next = l2;
            l2 = l2->next;
        }
        else if (l1->val < l2->val){
            head->next = l1;
            l1 = l1->next;
        }
    }

    if (l1 != nullptr){
        head->next = l1;
    }
    if (l2 != nullptr){
        head->next = l2;
    }

    return store_head;
}
int main(){
    
    return 0;
}