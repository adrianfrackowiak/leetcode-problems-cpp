/**
* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while (second) {
            next = second->next;
            second->next = prev;
            prev = second;
            second = next;
        }

        ListNode* first = head;
        while (first && first->next && prev) {
            ListNode* temp = first->next;
            ListNode* tempSec = prev->next;
            first->next = prev;
            prev->next = temp;
            first = temp;
            prev = tempSec;
        }
    }
};