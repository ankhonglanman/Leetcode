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
    bool isPalindrome(ListNode* head) {
        string num = "";
        num.reserve(10000);

        for(ListNode *cur = head; cur != nullptr; cur = cur->next){
            num += to_string(cur->val);
        }

        int len = num.size();
        int rep = (len - 1) / 2;

        for(int i = 0; i <= rep; i++){
            if(num[i] != num[len - 1 - i]){
                return false;
            }
        }

        return true;
    }
};