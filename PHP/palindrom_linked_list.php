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
     * @param ListNode $head
     * @return Boolean
     */
    function isPalindrome($head) {
        $slow = $head;
        $fast = $head;
        while ($fast !== null && $fast->next !== null) {
            $slow = $slow->next;
            $fast = $fast->next->next;
        }

        $cur = $slow;
        $prev = null;
        while ($cur != null) {
            $temp = $cur->next;
            $cur->next = $prev;
            $prev = $cur;
            $cur = $temp;
        }

        $left = $head;
        $prev = $prev;
        while ($prev != null) {
            if ($left->val != $prev->val) {
                return false;
            }
            $left = $left->next;
            $prev = $prev->next;
        }
        return true;
    }
}