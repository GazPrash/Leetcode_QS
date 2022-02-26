class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reorderList(self, head) -> None:
        """
        Do not return anything, modify head in-place instead.
        """

        nodes = []
        used_nodes = []
        store_head = head

        while (head):
            if (store_head != head) : nodes.append(head)
            head = head.next

        
        nodes.reverse()

        for node in nodes:
            print(store_head.val, store_head.next.val)
            store_next = store_head.next
            
            if store_next in used_nodes:
                store_head.next = None
                break
            
            if (store_next == node):
                if store_next is None:
                    break
                store_head = store_head.next
                continue

            if store_next is None:
                store_head.next = node
                store_head = store_head.next
                store_head.next = None
                break

            store_head.next = node
            store_head = store_head.next
            store_head.next = store_next
            store_head = store_head.next

            used_nodes.append(node)

        
