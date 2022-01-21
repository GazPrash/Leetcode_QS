#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

bool isPalindrome(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    vector<int> half;

    while (fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        half.push_back(slow->val);
    }

    int n = half.size()-1;
    while (slow){
        if (half[n] != slow->val) return false;
        n--;
    }


    return true;
    
}

int main(){
    
    return 0;
}