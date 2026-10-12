class Solution {
private:
    inline bool isOperator(const string& s){
        return ((s == "+") || (s == "-") || (s == "*") || (s == "/"));
    }
    inline int Operation(const int& a, const int& b, const string& op_string){
        
        char op = op_string[0];
        
        switch(op){
            case '+':
                return a + b; 
            case '-':
                return a - b;
            case '*':
                return a * b;
            case '/':
                return a / b;
        }

        return -1;
    }
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> operand;
        
        for(const auto& token : tokens){
            if(operand.size() >= 2 && isOperator(token)){
                int second = operand.top();
                operand.pop();
                int first = operand.top();
                operand.pop();
                operand.push(Operation(first, second, token));
            }
            else{
                operand.push(stoi(token));
            }
        }

        return operand.top();

    }
};