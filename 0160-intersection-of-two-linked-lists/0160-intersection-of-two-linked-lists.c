/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    for(struct ListNode *cur = headA; cur != NULL; cur = cur->next){
        cur->val = -cur->val;
    }
    struct ListNode *res = NULL;
    for(struct ListNode *cur = headB; cur != NULL; cur = cur->next){
        if(cur->val <= 0){
            res = cur;
            break;
        }
    }
    for(struct ListNode *cur = headA; cur != NULL; cur = cur->next){
        cur->val = -cur->val;
    }
    return res;
}