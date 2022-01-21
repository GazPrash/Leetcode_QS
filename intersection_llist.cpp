#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    while (headA && headB){
        if (headA == headB){
            return headA;
        }

        headA = headA->next;
        headB = headB->next;
    }

    return nullptr;
}
int main(){
    
    return 0;
}