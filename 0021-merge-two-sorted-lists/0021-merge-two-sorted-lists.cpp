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
        if(list1 == nullptr){
            return list2; 
        }
        if(list2 == nullptr){
            return list1;
        }
        ListNode *resHead = new ListNode();
        ListNode *res = resHead;
        ListNode *cur_l2 = list2;
        for(ListNode *cur = list1; cur != nullptr; cur = cur->next){
            while(cur_l2 != nullptr && cur_l2->val <= cur->val){
                res->next = cur_l2;
                res = res->next;
                cur_l2 = cur_l2->next;
            }
            res->next = cur;
            res = res->next;
        }
        while(cur_l2 != nullptr){
            res->next = cur_l2;
            cur_l2 = cur_l2->next;
            res = res->next;
        }
        res->next = nullptr;
        return resHead->next;
    }
};