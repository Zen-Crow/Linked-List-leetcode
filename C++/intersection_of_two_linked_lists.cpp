struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = 0;
        int l2 = 0;
        ListNode* cur1 = headA;
        ListNode* cur2 = headB;
        
        while (cur1 != nullptr) {
            l1++;
            cur1 = cur1->next;
        }
        while (cur2 != nullptr) {
            l2++;
            cur2 = cur2->next;
        }
        cur1 = headA;
        cur2 = headB;

        if (l1 > l2) {
            int dif = l1 - l2;
            while (dif > 0) {
                cur1 = cur1->next;
                dif--;
            }
        } else if (l1 < l2) {
            int dif = l2 - l1;
            while (dif > 0) {
                cur2 = cur2->next;
                dif--;
            }
        }
        while (cur1 != cur2) {
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        return cur1;
    }
};