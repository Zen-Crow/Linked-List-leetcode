package main

type ListNode struct {
	Val  int
	Next *ListNode
}

func removeElements(head *ListNode, val int) *ListNode {
	// когда первый элемент списка равен значению val и его нужно удалить.
	dummy := &ListNode{Next: head}
	cur := dummy

	for cur.Next != nil && cur.Next.Val == val {
		if val == cur.Next.Val {
			cur.Next = cur.Next.Next
		} else {
			cur = cur.Next
		}
	}
	return dummy.Next
}
