<?php
class ListNode {
public $val = 0;
public $next = null;
function __construct($val = 0, $next = null) {
$this->val = $val;
$this->next = $next;
}
}

class Solution {
    /**
    * @param ListNode $l1
    * @return ListNode
    * @param ListNode $l2
    */
    function mergeTwoLists($l1, $l2) {
        $dummy = new ListNode();
        $tail = $dummy;
        while ($l1 !== null && $l2 !== null) {
            if ($l1->val < $l2->val) {
                $tail->next = $l1;
                $l1 = $l1->next;
            } else {
                $tail->next = $l2;
                $l2 = $l2->next;
            }
            $tail = $tail->next;
        }
        $tail->next = $l1 === null ? $l2 : $l1;
        return $dummy->next;
    }
}