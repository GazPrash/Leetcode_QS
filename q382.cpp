#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};

class Solution {
public:
    ListNode* listhead;
    int listsz = 0;
    Solution(ListNode* head) {
        listhead = head;
        list_size(listhead);
    }
    
    void list_size(ListNode* head){
        auto node = head;
        int ind = 0;
        while (node){
            node = node->next;
            ind++;
        }
        listsz = ind;
    }

    int getRandom() {
        int rand_ind = rand()%listsz;

        auto node = listhead;
        while (rand_ind > 0){
            node = node->next;
            rand_ind--;
        }
        return node->val;
    }
};



int main(){
    
    return 0;
}