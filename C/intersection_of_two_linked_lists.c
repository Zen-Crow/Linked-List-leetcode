#include <stddef.h>


struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int l1 = 0, l2 = 0;
    struct ListNode *a = headA, *b = headB;

    while (a != NULL) {
        l1++;
        a = a->next;
    }
    while (b != NULL) {
        l2++;
        b = b->next;
    }
    a = headA;
    b = headB;
    if (l1 > l2) {
        int dif = l1 - l2;
        while (dif--) {
            a = a->next;
        }
    } else {
        int dif = l2 - l1;
        while (dif--) {
            b = b->next;
        }
    }
    while (a != b) {
        a = a->next;
        b = b->next;
    }
    return a;
};