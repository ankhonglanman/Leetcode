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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* insertNodeFromArrayRange(vector<int>& arr, int first, int last){
    if (first > last) return nullptr;         

    int mid = first + (last - first) / 2;
    TreeNode* here = new TreeNode(arr[mid]);

    here->left  = insertNodeFromArrayRange(arr, first, mid - 1);
    here->right = insertNodeFromArrayRange(arr, mid + 1, last);

    return here;
}
public:
    TreeNode* sortedListToBST(ListNode* head) {

        ListNode* curr = head;

        TreeNode* root; 

        vector<int> arrayOfSortedList;
        
        while(curr != nullptr){
        
            arrayOfSortedList.push_back(curr->val);
        
            curr = curr->next;

        }

        int len = arrayOfSortedList.size();

        root = insertNodeFromArrayRange(arrayOfSortedList, 0, len - 1);

        return root;

    }
};