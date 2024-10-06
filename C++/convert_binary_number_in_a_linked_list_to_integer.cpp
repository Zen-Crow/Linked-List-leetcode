#include <string>
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {

        ListNode* cur = head;
        string result = "";

        while (cur != nullptr) {
            result += to_string(cur->val);
            cur = cur->next;
        }
        return stoi(result, nullptr, 2);
    }
};