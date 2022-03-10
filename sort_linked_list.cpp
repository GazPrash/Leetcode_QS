#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        unordered_map<int, ListNode*> track;
        unordered_map<int, int> fq;
        unordered_map<int, vector<ListNode*>> repeated;
        vector<int> temp;
        auto storehead = head;

        while (storehead){
            if (fq[storehead->val] >= 1){
                auto temp_nodes = repeated[storehead->val]; 
                temp_nodes.push_back(storehead);
                repeated[storehead->val] = temp_nodes;
            }
            fq[storehead->val]++;
            storehead = storehead->next;
        }

        while (head){
            track[head->val] = head;
            temp.push_back(head->val);
            head = head->next;
        }

        sort(temp.begin(), temp.end());

        ListNode* temp_node = nullptr;
        ListNode* store_temp = temp_node;

        for (int i = 0; i < temp.size(); i++){
            if (fq[temp[i]] > 1){
                
            }

            temp_node = track[temp[i]];
            if (i == temp.size()-1){
                temp_node->next = nullptr;
                break;
            }
            else temp_node->next = track[temp[i+1]];
        }

        return store_temp;

    }
};

int main(){
    
    return 0;
}