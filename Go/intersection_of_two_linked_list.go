package main


type ListNode struct {
	Val  int
	Next *ListNode
}

func getIntersectionNode(headA, headB *ListNode) *ListNode {
	l1, l2 := 0, 0
	first, second := headA, headB

	for first != nil {
		l1++
		first = first.Next
	}
	for second != nil {
		l2++
		second = second.Next
	}
	first, second = headA, headB
	if l1 > l2 {
		dif := l1 - l2
		for dif > 0 {
			first = first.Next
			dif--
		}
	} else {
		dif := l2 - l1
		for dif > 0 {
			second = second.Next
			dif--
		}
	}
	for first != second {
		first = first.Next
		second = second.Next
	}
	return first
}