class MinStack {
private:
    std::stack<int> stack1;
    std::stack<int> stack2;
public:
    MinStack() {

    }
    
    void push(int val) {
        stack1.push(val);
        val = std::min(val, stack2.empty() ? val : stack2.top());
        stack2.push(val);
    }
    
    void pop() {
        stack1.pop();
        stack2.pop();
    }
    
    int top() {
        return stack1.top();
    }
    
    int getMin() {
        return stack2.top();
    }
};
