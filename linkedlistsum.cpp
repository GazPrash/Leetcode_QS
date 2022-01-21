// You are given two non-empty linked lists representing two non-negative integers. 
// The digits are stored in reverse order, and each of their nodes contains a single digit. 
// Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

#include<iostream>
using namespace std;

class ListNode{
    public:
        int val;
        int top;
        int i = 0;
        ListNode* link;
        int out;
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
        void parse_ll(ListNode* ptr);

};

ListNode* ListNode :: addTwoNumbers(ListNode* l1, ListNode* l2){
    // top = 0;
    ListNode* ansnode = new ListNode;
    ListNode* store_head = new ListNode;
    store_head = ansnode;
    
    while (i <= 3)
    {
        int out = l1->val + l2->val;
        ansnode->val = out;
        // ansnode = ansnode->link;
        // l1 = l1->link;
        // l2 = l2->link;
        // // top++;         
        cout<<i<<"times"<<endl;
        i++;
    }
    
    ansnode->link = NULL;
    return store_head;

} 

void ListNode :: parse_ll(ListNode* ptr){
    int j = 0;
    // cout<<top;

    while (j <= 3)
    {
        cout<<ptr->val;
        ptr = ptr->link;
        j++;
    }
    
}



int main(){
    ListNode* operate = new ListNode;
    ListNode* new_head = new ListNode;
    
    ListNode* l1 = new ListNode;
    ListNode* l12 = new ListNode;
    ListNode* l13 = new ListNode;

    l1->val = 2;
    l12->val = 3;
    l13->val = 5;

    l1->link = l12;
    l12->link = l13;
    l13->link = NULL;

    ListNode* l2 = new ListNode;
    ListNode* l22 = new ListNode;
    ListNode* l23 = new ListNode;

    l2->val = 4;
    l22->val = 3;
    l23->val = 1;

    l2->link = l22;
    l22->link = l23;
    l23->link = NULL;

    new_head = operate->addTwoNumbers(l1, l2);
    operate->parse_ll(new_head);


    return 0;
}

