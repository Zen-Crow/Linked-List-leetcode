#include <stdbool.h>
#include <stddef.h>


struct ListNode {
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct ListNode *cur = slow;
    struct ListNode *prev = NULL;
    while (cur != NULL) {
        struct ListNode *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    struct ListNode *l = head;
    struct ListNode *r = prev;
    while (r != NULL) {
        if (l->val != r->val) {
            return false;
        }
        l = l->next;
        r = r->next;
    }
    return true;
};