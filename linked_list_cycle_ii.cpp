#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> record;
        auto last_node = head;
        while (head){
            record[head]++;

            if (record[head] > 1){
                return last_node;
                break;
            }
            last_node = head;
            head = head->next;
        }
        
    }
};

int main(){
    
    return 0;
}