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
    ListNode* deleteDuplicates(ListNode* head) {
        for(ListNode *cur = head; cur != nullptr; cur = cur->next){
            while(cur->next != nullptr && cur->next->val == cur->val){
                cur->next = cur->next->next;
            }
        }
        return head;
    }
};