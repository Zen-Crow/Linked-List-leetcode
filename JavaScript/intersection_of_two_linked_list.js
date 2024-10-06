function ListNode(val, next) {
    this.val = (val === undefined ? 0 : val)
    this.next = (next === undefined ? 0 : next)
}

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */

var getIntersectionNode = function (headA, headB) {
    l1 = 0
    l2 = 0
    list1 = headA
    list2 = headB

    while (list1 !== null) {
        l1++
        list1 = list1.next
    }

    while (list2 !== null) {
        l2++
        list2 = list2.next
    }
    list1 = headA
    list2 = headB

    if (l1 > l2) {
        dif = l1 - l2
        while (dif) {
            list1 = list1.next
            dif--
        }
    } else if (l1 < l2) {
        dif = l2 - l1
        while (dif) {
            list2 = list2.next
            dif--
        }
    }
    while (list1 !== list2) {
        list1 = list1.next
        list2 = list2.next
    }
    return list1
};

