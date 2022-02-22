#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};

class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
            if (k == 0) return head;
            if ((!head) || (!head->next)) return head;
            int iter = 0;
            auto store = head;
            auto store2 = head;

            while (store){
                store = store->next;
                iter++;
            }
            if (k%iter == 0) return head;
            else k = k%iter;
            
            ListNode* store3;
            while (iter >= 0){
                if ((iter - k -1) ==  0){
                    store3 = store2;
                    store2 = store2->next;
                    break;
                }

                if (!store2->next){
                    store2 = head;
                    continue;
                }
                store2 = store2->next;
                iter--;
            }

            store3->next = nullptr;
            auto store4 = store2;

            while(store4->next){
                store4 = store4->next;
            }
            store4->next = head;
            return store2;
        }
};



int main(){
    
    return 0;
}