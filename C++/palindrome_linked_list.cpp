struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solutin {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* cur = slow;
        ListNode* prev = nullptr;
        while(cur != nullptr) {
            ListNode* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        ListNode* l = head;
        ListNode* r = prev;
        while(r != nullptr) {
            if(l->val != r->val) {
                return false;
            }
            l = l->next;
            r = r->next;
        }
        return true;
    }
};