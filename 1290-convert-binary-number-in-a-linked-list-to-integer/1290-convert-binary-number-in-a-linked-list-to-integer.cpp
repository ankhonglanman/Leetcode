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
    int getDecimalValue(ListNode* head) {
        int shift = 31;
        int res = 0;
        for(ListNode* cur = head; cur != nullptr; cur = cur->next){
            shift--;
            
            if(cur->val){
                cout << "shift: " << shift << endl;
                res ^= 1<<(shift);
            }
        }
        //cout << ((res>>shift)& << endl;
        return (res>>shift);
    }
};