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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr){
            return nullptr;
        }
        ListNode *left = new ListNode(0, head);
        ListNode *right = head;
        int count = 0;
        while(right != nullptr){
            count++;
            right = right->next;
            if(count > n){
                left = left->next;
            }
        }
        if(left->next != head){
            left->next = left->next->next;
        }
        else{
            head = head->next;
        }
        return head;
    }
};