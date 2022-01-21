#include<iostream>
using namespace std;

class ListNode{
    public:
        ListNode* next;
};

// EXAMPLE : | 1 | 2 | 3 | 4 | 5 | 6 |

ListNode* middleNode(ListNode* head, int n){
    int counter = 0, counter2 = 0;
    ListNode* store_head = head;
    ListNode* store_head2 = head;
    while (head != nullptr){
        head = head->next;
        counter++;
    }

    if (counter == 1){
        return nullptr;
    }

    if ((counter - n) == 0){
        store_head = store_head->next;
        return store_head;
    } 

    counter--;
    counter2 = counter - n;
    while (counter2 > 0){
        store_head = store_head->next;
        counter2--;
    }
    
    store_head->next = (store_head->next)->next;

    return store_head2;
}

int main(){
    
    return 0;
}