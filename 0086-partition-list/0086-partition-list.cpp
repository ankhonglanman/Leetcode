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
    ListNode* partition(ListNode* head, int x) {
        ListNode frontHead, backHead;
        ListNode *front = &frontHead;
        ListNode *back = &backHead;

        for(ListNode *cur = head; cur != nullptr; cur = cur->next){
            if(cur->val < x){
                front->next = cur;
                front = front->next; 
            }
            else{
                back->next = cur;
                back = back->next;
            }
        }

        front->next = backHead.next;
        back->next = nullptr;

        return frontHead.next;
    }
};