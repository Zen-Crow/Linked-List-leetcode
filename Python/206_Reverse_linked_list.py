class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        prev = None
        cur = head

        while cur:
            temp = cur.next
            cur.next = prev
            prev = cur
            cur = temp
        return prev
    
def print_list(node):
    res = []
    if not node:
        print('List is empty')
        return
    while node:
        res.append(node.val)
        node = node.next
    print(res)


# Input: head = [1,2,3,4,5]
# Output: [5,4,3,2,1]
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)
head.next.next.next = ListNode(4)
head.next.next.next.next = ListNode(5)

reverse = Solution().reverseList(head)
print_list(reverse)