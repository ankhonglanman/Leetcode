/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root){
        if(root == nullptr){
            return 0;
        }

        int depth = 1;
        queue<Node*> seen;
        
        seen.push(root);

        while(!seen.empty()){
            int size = seen.size();

            for(int i = 0; i < size; i++){
                Node* cur = seen.front();
                seen.pop();

                for(const auto& c : cur->children){
                    seen.push(c);
                }
            }

            depth++;
        }

        return depth - 1;
    }
};