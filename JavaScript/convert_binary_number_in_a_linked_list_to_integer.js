function ListNode(val, next) {
    this.val = (val === undefined ? 0 : val)
    this.next = (next === undefined ? null : next)
}

/**
 * @param {ListNode} head
 * @return {number}
 */

var getDecimalValue = function (head) {
    let result = ""
    var cur = head

    while (cur !== null) {
        result += cur.val
        cur = cur.next
    }
    return parseInt(result, 2)
};