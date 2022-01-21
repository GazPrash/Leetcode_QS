#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = nullptr;
        ListNode* storehead = head;
        ListNode* dell;

        while (head){
            if (head->val == val){
                if (!prev){
                    dell = head;
                    head = head->next;
                    storehead = head;
                    delete dell;
                }
                else{
                    prev->next = head->next;
                    head = head->next;
                }
            }

            else{
                prev = head;
                head = head->next;
            }

        }
        
        return storehead;
    }
};


int main(){
    
    return 0;
}