#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

class Solution {
    public:
        bool hasCycle(ListNode *head) {
                std:: map<ListNode*, int> recrd;
            
            while (head){
                recrd[head]++;
                head = head->next;
                for (auto iter = recrd.begin(); iter != recrd.end(); iter++){
                    if ((iter->second) > 1) return true;
                }
            }

            return false;
        }
};