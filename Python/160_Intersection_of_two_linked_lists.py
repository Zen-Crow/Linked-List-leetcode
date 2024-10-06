class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        l1, l2 = 0, 0
        cur1, cur2 = headA, headB

        while cur1:
            l1 += 1
            cur1 = cur1.next
        while cur2:
            l2 += 1
            cur2 = cur2.next

        cur1, cur2 = headA, headB
        if l1 > l2:
            diff = l1 - l2
            while diff:
                cur1 = cur1.next
                diff -= 1
        else:
            diff = l2 - l1
            while diff:
                cur2 = cur2.next
                diff -= 1
        while cur1 != cur2:
            cur1 = cur1.next
            cur2 = cur2.next
        return cur1
    

def create_list(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    cur = head
    for i in range(1, len(arr)):
        cur.next = ListNode(arr[i])
        cur = cur.next
    return head


# Input: intersectVal = 8
listA = create_list([4, 1, 8, 4, 5])
listB = create_list([5, 6, 1])
# skipA = 2, skipB = 3
# Output: Intersected at '8'
intersectNode = listA.next.next

tailB = listB
while tailB.next:
    tailB = tailB.next
tailB.next = intersectNode

solution = Solution()
intersection = solution.getIntersectionNode(listA, listB)

# Print the result
if intersection:
    print("Intersected at: ", intersection.val)
else:
    print("No intersection")
