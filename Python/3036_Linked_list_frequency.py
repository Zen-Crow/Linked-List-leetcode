from collections import defaultdict

class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next 


class Solution:
    def frequenciesOfElements(self, head: ListNode) -> ListNode:
        lookup = defaultdict(int)
       
        cur, res = head, []
        while cur:
            lookup[cur.val] += 1
            cur = cur.next
        for item in lookup.values():
            res.append(item)
        return res


# Input: head = [1,1,2,1,2,3]
# Output: [3,2,1]
head = ListNode(1)
head.next = ListNode(1)
head.next.next = ListNode(2)
head.next.next.next = ListNode(1)
head.next.next.next.next = ListNode(2)
head.next.next.next.next.next = ListNode(3)

print(Solution().frequenciesOfElements(head))