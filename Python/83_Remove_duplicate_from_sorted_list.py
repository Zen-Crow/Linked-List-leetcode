class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        cur = head
        while cur and cur.next:
            if cur.val == cur.next.val:
                cur.next = cur.next.next
            else:
                cur = cur.next
        return head


def print_node(node):
    if not node:
        print("List is empty")
        return
    res = []
    while node:
        res.append(node.val)
        node = node.next
    print(res)


# Input: head = [1,1,2]
# Output: [1,2]
head = ListNode(1)
head.next = ListNode(1)
head.next.next = ListNode(2)

result = Solution().deleteDuplicates(head)
print_node(result)
