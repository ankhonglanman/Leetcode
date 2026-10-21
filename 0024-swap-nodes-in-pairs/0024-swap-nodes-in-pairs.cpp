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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        ListNode* myHead = new ListNode(0, head);
        ListNode* tail = myHead;
        ListNode* prev = head;
        ListNode* cur = head->next;

        while(prev != nullptr && cur != nullptr){
            prev->next = cur->next;
            cur->next = prev;
            tail->next = cur;
            tail = prev;
            prev = prev->next;
            if(prev != nullptr) cur = prev->next;
        }

        return myHead->next;
    }
};