class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val 
        self.next = next 


class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        slow = head
        fast = head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        return slow


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
# Output: [3,4,5]
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)
head.next.next.next = ListNode(4)
head.next.next.next.next = ListNode(5)

middle = Solution().middleNode(head)
print_list(middle)