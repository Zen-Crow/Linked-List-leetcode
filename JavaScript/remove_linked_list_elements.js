function ListNode(val, next) {
    this.val = (val === undefined ? 0 : val)
    this.next = (next === undefined ? null : next)
}

/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */

var removeElements = function (head, val) {
    let dummy = new ListNode(0, head)
    let cur = dummy
    
    while (cur !== null && cur.next !== null) {
        if (val === cur.next.val) {
            cur.next = cur.next.next
        } 
        cur = cur.next
    }
    return dummy.next
};