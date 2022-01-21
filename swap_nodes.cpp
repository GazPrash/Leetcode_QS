#include<iostream>
using namespace std;

class ListNode{
    public:
        ListNode* next;

};

ListNode* swapPairs(ListNode* head){
       
    if (head == NULL)
    {
        return NULL;
    }
    
    if (head->next == NULL)
    {
        return head;
    }
    ListNode* recursive_next = head->next;

    head->next = swapPairs(recursive_next->next);
    (recursive_next)->next = head;
    head = recursive_next;

    return head;


}


int main(){
    ListNode* head = new ListNode;
    swapPairs(head);

    
    return 0;
}