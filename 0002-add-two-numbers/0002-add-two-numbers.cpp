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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        int sum = curr1->val + curr2->val;

        ListNode* resultHead = new ListNode(sum % 10);
        ListNode* resultTail = resultHead;
        carry = sum / 10;

        curr1 = curr1->next; 
        curr2 = curr2->next;
        
        while(curr1 != nullptr && curr2 != nullptr){
            sum = curr1->val + curr2->val + carry; 
            ListNode* tail = new ListNode(sum % 10);
            carry = sum / 10;
            resultTail->next = tail;
            resultTail = resultTail->next;
            curr1 = curr1->next; 
            curr2 = curr2->next;
        }

        if(curr1 == nullptr){
            while(curr2 != nullptr){
                sum = curr2->val + carry;
                ListNode* tail = new ListNode(sum % 10); 
                resultTail->next = tail;
                resultTail = resultTail->next;
                carry = sum / 10;
                curr2 = curr2->next;
            }
        }

        if(curr2 == nullptr){
            while(curr1 != nullptr){
                sum = curr1->val + carry;
                ListNode* tail = new ListNode(sum % 10);
                resultTail->next = tail; 
                resultTail = resultTail->next;
                carry = sum / 10;
                curr1 = curr1->next;
            }
        }

        if (carry){
            ListNode* tail = new ListNode(carry);
            resultTail->next = tail;
        }

        return resultHead;
    }
};