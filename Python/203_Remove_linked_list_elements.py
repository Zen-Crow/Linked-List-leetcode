class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:
        dummy = ListNode(next=head)
        cur = dummy
        while cur and cur.next:
            if val == cur.next.val:
                cur.next = cur.next.next
            else:
                cur = cur.next
        return dummy.next


def print_node(node):
    if not node:
        print("List is empty")
        return
    res = []
    while node:
        res.append(node.val)
        node = node.next
    print(res)


# Input: head = [1,2,6,3,4,5,6], val = 6
# Output: [1,2,3,4,5]
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(6)
head.next.next.next = ListNode(3)
head.next.next.next.next = ListNode(4)
head.next.next.next.next.next = ListNode(5)
head.next.next.next.next.next.next = ListNode(6)
val = 6

result = Solution().removeElements(head, val)
print_node(result)
