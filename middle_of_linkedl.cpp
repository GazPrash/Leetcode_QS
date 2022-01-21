#include<iostream>
using namespace std;

// CONCEPT : We start with two pointers, one for counting how much nodes we actually traverse through when we i run the first while loop
//           (counter) and (counter2) for now traversing through the middle node. We substract 1 from counter becuase we actually reach a nullptr in
//            the first while loop. Now, if counter is even we end the second loop at counter/2 or counter/2 +1 if its odd.


class ListNode{
    public:
        ListNode* next;
};

// EXAMPLE : | 1 | 2 | 3 | 4 | 5 | 6 |

ListNode* middleNode(ListNode* head){
    int counter = 0, counter2 = 0;
    ListNode* store_head = head;
    while (head != nullptr){
        head = head->next;
        counter++;
    }
    counter--;
    if (counter%2 == 0){
        while (counter2 < (counter/2)){
            store_head = store_head->next;
            counter2++;
        }
        return store_head;
    }
    else
    {
        while (counter2 < (counter/2 +1)){
            store_head = store_head->next;
            counter2++;
        }
        return store_head;
    }
}

int main(){
    
    return 0;
}