/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *cur = node;
        while(cur != nullptr){
            cur->val = cur->next->val;
            if(cur->next->next == nullptr){
                cur->next = nullptr;
            }
            cur = cur->next;
        }
    }
};