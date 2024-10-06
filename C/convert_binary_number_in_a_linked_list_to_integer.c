#include <cstddef>
#include <cstdio>


struct ListNode {
    int val;
    struct ListNode *next;
};

int getDecimalValue(struct ListNode* head) {
    char result[100];
    struct ListNode* cur = head;
    int i = 0;
    while(cur != NULL) {
        result[i] = cur->val + '0';
        cur = cur->next;
        i++;
    }
    result[i] = '\0';
    return strtol(result, NULL, 2);
}