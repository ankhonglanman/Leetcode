class MyQueue {
private:
    stack<int> q;
    stack<int> tempS;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        int len = q.size();
        for(int i = 0; i < len; i++){
            tempS.push(q.top());
            q.pop();
        }
        q.push(x);
        for(int i = 0; i < len; i++){
            q.push(tempS.top());
            tempS.pop();
        }
    }
    
    int pop() {
        int temp = q.top();
        q.pop();
        return temp;
    }
    
    int peek() {
        return q.top();
    }
    
    bool empty() {
        return (q.size() == 0);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */