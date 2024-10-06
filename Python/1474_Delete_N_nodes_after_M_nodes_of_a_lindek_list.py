class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next


class Solution:
    def deleteNodes(self, head: ListNode, m: int, n: int) -> ListNode:
        cur = head
        while cur:
            for _ in range(m - 1):
                if cur:
                    cur = cur.next
            if cur is None:
                return head
            
            del_nodes = cur.next 
            for _ in range(n):
                if del_nodes:
                    del_nodes = del_nodes.next

            # Connect the current_node (cur) to the node following the last deleted node (next_cur)
            cur.next = del_nodes
            # Перейти к следующему набору узлов
            cur = del_nodes
        return head
    

def print_node(head):
    curr = head 
    while curr:
        print(curr.val, end=" ")
        curr = curr.next
    print()


head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)
head.next.next.next = ListNode(4)
head.next.next.next.next = ListNode(5)
head.next.next.next.next.next = ListNode(6)
head.next.next.next.next.next.next = ListNode(7)
head.next.next.next.next.next.next.next = ListNode(8)
head.next.next.next.next.next.next.next.next = ListNode(9)
head.next.next.next.next.next.next.next.next.next = ListNode(10)
head.next.next.next.next.next.next.next.next.next.next = ListNode(11)
head.next.next.next.next.next.next.next.next.next.next.next = ListNode(12)
head.next.next.next.next.next.next.next.next.next.next.next.next = ListNode(13)



m = 2
n = 3
obj = Solution().deleteNodes(head, m, n)
print_node(obj)