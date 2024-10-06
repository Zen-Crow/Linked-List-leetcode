package main

import "strconv"

type ListNode struct {
	Val  int
	Next *ListNode
}

func getDecimalValue(head *ListNode) int {

	res := ""
	cur := head

	for cur != nil {
		res += strconv.Itoa(cur.Val)
		cur = cur.Next
	}

	ans, _ := strconv.ParseInt(res, 2, 64)
	return int(ans)
}
