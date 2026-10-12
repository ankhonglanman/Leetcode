class Solution {
private: 
    struct myTable{
        char key;
        int count;
    }; 
public:
    string removeDuplicates(string s, int k) {
        stack<struct myTable> myStack;
        int len = s.size();
        int returnSize = len;
        for (int i = 0; i < len; i++){
            if(!myStack.empty() && myStack.top().key == s[i]){
                myStack.top().count++;
            }
            else{
                myStack.push({.key = s[i], .count = 1});
            }
            if(myStack.top().count == k){
                myStack.pop();
                returnSize -= k;
            }
        }
        string returnString(returnSize, ' ');
        for(int i = returnSize - 1; i >= 0; i--){
            if(myStack.top().count > 0){
                returnString[i] = myStack.top().key;
                myStack.top().count--;
            }
            else{
                myStack.pop();
                myStack.top().count--;
                returnString[i] = myStack.top().key;
            }
        }
        return returnString;
    }
};