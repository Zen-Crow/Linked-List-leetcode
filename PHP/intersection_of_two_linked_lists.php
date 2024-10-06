<?php
class ListNode
{
    public $val = 0;
    public $next = null;
    function __constructor($val)
    {
        $this->val = $val;
    }
}

class Solution
{
    /**
     * @param ListNode $headA
     * @param ListNode $headB
     * @return ListNode
     */
    function getIntersectionNode($headA, $headB)
    {
        $l1 = 0;
        $l2 = 0;
        $first = $headA;
        $second = $headB;
        while ($first !== null) {
            $l1++;
            $first = $first->next;
        }
        while ($second !== null) {
            $l2++;
            $second = $second->next;
        }
        $first = $headA;
        $second = $headB;
        if ($l1 > $l2) {
            $dif = $l1 - $l2;
            while ($dif--) {
                $first = $first->next;
            }
        } else {
            $dif = $l2 - $l1;
            while ($dif--) {
                $second = $second->next;
            }
        }
        while ($first !== $second) {
            $first = $first->next;
            $second = $second->next;
        }
        return $first;
    }
}

// Выбор между операторами != и !== зависит от контекста и того, 
// что именно вы хотите проверить — значения или значения и тип данных.