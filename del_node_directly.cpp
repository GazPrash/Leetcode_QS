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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// TODO : Attempt the following code with two pointer 
//        apporoach next time...in O(1)Space

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* store = node;
        vector<int> storeval;

        while (node->next){
            node = node->next;
            storeval.push_back(node->val);
        }
        
        int i = 0;

        while (i < storeval.size()){
            if (!store->next->next){
                store->val = storeval[i];
                store->next = nullptr;
                break;
            }
            
            store->val = storeval[i];
            store = store->next;
            i++;
        }

    }
};
int main(){
    
    return 0;
}