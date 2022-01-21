#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *deleteDuplicates(ListNode *head)
{
    std::unordered_map<int, int> mark;
    ListNode *storehead = head;
    ListNode *prev;
    bool changeprev = true;

    while (head)
    {
        mark[head->val]++;
        if (mark[head->val] > 1)
            prev->next = head->next, changeprev = false;
        else
            changeprev = true;
        if (changeprev)
            prev = head;
        head = head->next;
    }
    return storehead;
}

int main()
{

    return 0;
}