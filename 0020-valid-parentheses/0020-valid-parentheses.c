inline bool isOpen(char c){
    if(c == '{' || c == '(' || c == '['){
        return true;
    }
    else{
        return false;
    }
} 
bool isValid(char* s) {
    int sLen = strlen(s);
    int stack[sLen];
    int top = -1;
    for(int i = 0; i < sLen; i++){
        if(isOpen(s[i])){
            stack[++top] = s[i];
        }
        else{
            if(top < 0){
                return false;
            }
            if(s[i] - stack[top] <= 2 && s[i] - stack[top] >= 0){
                stack[top--] = 0;
            }
            else{
                return false;
            }
        }
    }
    return (top == -1);
}