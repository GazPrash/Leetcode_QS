# Definition for singly-linked list.

from __future__ import annotations

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

    def add_two(self, l1: ListNode, l2: ListNode, rem = 0, head = None)-> ListNode:
        if head is None:
            head = l1
        total = l1.val + l2.val + rem
        if total > 9:
            rem = (str(total))[:1]

        l1.val = total

        if l1.next and l2.next:
            return self.add_two(self, l1.next, l2.next, rem, head)
        else:
            return l1


if __name__ == '__main__':
    l1 = ListNode(5)
    l2 = ListNode(11)

    def add_two_nums(l1, l2):
        pass