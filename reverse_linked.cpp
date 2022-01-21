#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

};

ListNode* reverseList(ListNode* head) {
    vector<int> arr;
    ListNode* storeh = head;
    ListNode* st2 = head;

    while (head){
        arr.push_back(head->val);
        head = head->next;
    }

    int n = arr.size()-1;
    while (storeh)
    {
        storeh->val = arr[n];
        n--;
    }

    return st2;

}
int main(){
    
    return 0;
}