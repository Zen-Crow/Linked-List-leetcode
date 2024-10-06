<?php
class ListNode {
    public $val = 0;
    public $next = null;
    function __constructor($val = 0, $next = null) {
        $this->val = $val;
        $this->next = $next;
    }
}

class Solution {
    /**
     * @param ListNode $head
     * @return ListNode     
     */
    function deleteDuplicates($head) {
        $cur = $head;

        while ($cur !== null && $cur->next !== null) {
            if ($cur->val === $cur->next->val) {
                $cur->next = $cur->next->next;
            } else {
                $cur = $cur->next;
            }
        }
        return $head;
    }
}