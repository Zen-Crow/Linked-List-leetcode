class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def getWinner(self, head: ListNode) -> int:
        odd, even = 0, 0
        cur = head
        while cur:
            first = cur.val
            second = cur.next.val
            odd += first < second
            even += first > second
            cur = cur.next.next

        if odd > even:
            return "Odd"
        if even > odd:
            return "Even"
        return "Tie"


# Input: head = [2,1]
# Output: "Even"
head = ListNode(2)
head.next = ListNode(1)

print(Solution().getWinner(head))

