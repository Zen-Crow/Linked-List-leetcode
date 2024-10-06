class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next


class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        res = ''
        cur = head 
        while cur:
            res += str(cur.val)
            cur = cur.next

        return int(''.join(res), 2)
    

# Input: head = [1,0,1]
# Output: 5
head = ListNode(1)
head.next = ListNode(0)
head.next.next = ListNode(1)

print(Solution().getDecimalValue(head))