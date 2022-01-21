/*
 * Definition for singly-linked list.
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *newhead = new ListNode;
        ListNode *storehead = newhead;

        while (l1 && l2)
        {
            if ((l1->val) <= (l2->val))
            {
                newhead->next = l1;
                newhead = newhead->next;
                l1 = l1->next;
            }
            else if ((l1->val) > (l2->val))
            {
                newhead->next = l2;
                newhead = newhead->next;
                l2 = l2->next;
            }
        }

        if (l1)
        {
            newhead->next = l1;
        }

        if (l2)
        {
            newhead->next = l2;
        }

        return storehead->next;
    }
};