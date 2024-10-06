#include <stdlib.h>
#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *cur = head;
    struct ListNode *prev = NULL;
    while (cur != NULL)
    {
        struct ListNode *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}

struct ListNode *createNode(int val)
{
    struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

void printList(struct ListNode *head)
{
    struct ListNode *cur = head;
    while (cur != NULL) {
        printf("%d ", cur->val);
        if (cur->next != NULL) {
            printf("-> ");
        }
        cur = cur->next;
    }
    printf("-> NULL\n");
}

int main()
{
    struct ListNode *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    printf("Original List: ");
    printList(head);
    head = reverseList(head);
    printList(head);
    return 0;
}