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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        ListNode* currList1 = list1;
        ListNode* currList2 = list2;

        while (currList1 && currList2) {
            if (currList1->val > currList2->val) {
                tail->next = currList2;
                tail = currList2;
                currList2 = currList2->next;
            } else {
                tail->next = currList1;
                tail = currList1;
                currList1 = currList1->next;
            }
        }

        tail->next = currList1 ? currList1 : currList2;
        return dummy.next;
    }
};