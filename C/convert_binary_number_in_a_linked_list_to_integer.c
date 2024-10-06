#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


struct ListNode
{
    int val;
    struct ListNode *next;
};

int getDecimalValue(struct ListNode *head)
{
    char result[100];
    struct ListNode *cur = head;
    int i = 0;
    while (cur != NULL)
    {
        result[i] = cur->val + '0';
        cur = cur->next;
        i++;
    }
    result[i] = '\0';
    return strtol(result, NULL, 2);
}

int main()
{
    struct ListNode *head = malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = malloc(sizeof(struct ListNode));
    head->next->val = 0;
    head->next->next = malloc(sizeof(struct ListNode));
    head->next->next->val = 1;
    head->next->next->next = NULL;

    printf("%d", getDecimalValue(head));
    return 0;
}