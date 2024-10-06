#include <stddef.h>  // NULL
#include <stdlib.h>  // malloc


struct ListNode {
    int val; 
    struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* cur = dummy;

    while (cur != NULL && cur->next != NULL) {
        if (val == cur->next->val) {
            cur->next = cur->next->next;
        } else {
            cur = cur->next;
        }
    }
    return dummy->next;
};