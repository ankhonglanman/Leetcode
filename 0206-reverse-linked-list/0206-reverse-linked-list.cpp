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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head; 

        ListNode *prevPrev = nullptr;
        ListNode *prev = head;
        ListNode *cur = head->next;
        ListNode *newHead = prev;

        while(prev != nullptr ){
            prev->next = prevPrev;
            prevPrev = prev;
            prev = cur;
            if (cur != nullptr) cur = cur->next;
            if(prev != nullptr && prev->next == nullptr) newHead = prev;
        }
        
        return newHead;
    }
};