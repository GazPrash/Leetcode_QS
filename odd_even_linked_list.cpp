#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if ((!head) || (!head->next)) return head;
        bool isodd = 1;
        ListNode* evenhead = nullptr;
        ListNode* oddhead = nullptr;
        ListNode* store_even;
        ListNode* store_odd;

        while (head){
            if (isodd) {
                if (!oddhead){
                    oddhead = head;
                    store_odd = oddhead;
                }
                else {
                    oddhead->next = head;
                    oddhead = oddhead->next;
                }
                isodd = false;

            } else {
                if (!evenhead){
                    evenhead = head;
                    store_even = evenhead;
                }
                else {
                    evenhead->next = head;
                    evenhead = evenhead->next;
                }
                isodd = true;
            }

            head = head->next;
        }
        oddhead->next = store_even;
        evenhead->next = nullptr;
        return store_odd;
    }
};


int main(){
    
    return 0;
}