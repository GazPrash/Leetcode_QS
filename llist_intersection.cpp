#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    std:: unordered_map<ListNode*, int> nodectr;

    while (headA){
        nodectr[headA]++;
        headA = headA->next;
    }

    while (headB){
        nodectr[headB]++;
        headB = headB->next;
    }

    for (auto iter = nodectr.begin(); iter != nodectr.end(); iter++){
        if (iter->second > 1) return iter->first;
    }
}

int main(){
    
    return 0;
}