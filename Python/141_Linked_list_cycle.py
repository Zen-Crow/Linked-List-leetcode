class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val 
        self.next = next 


class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        slow = head 
        fast = head 

        while fast and fast.next:
            slow = slow.next 
            fast = fast.next.next 
            if slow == fast:
                return True
        return False
    

# Input: head = [3,2,0,-4], pos = 1
# Output: true
head = ListNode(3)
second = ListNode(2)
third = ListNode(0)
fourth = ListNode(-4)

head.next = second
second.next = third
third.next = fourth
# Создание цикла: fourth.next = second
fourth.next = second

print(Solution().hasCycle(head))