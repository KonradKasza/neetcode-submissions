class MinStack {
    std::stack<int> stacks;
    std::stack<int> minStack;
public:
    MinStack() {}
    
    void push(int val) {
        stacks.push(val);
        int minVal = std::min(val,minStack.empty() ? val : minStack.top());
        minStack.push(minVal);
    }
    
    void pop() {
        stacks.pop();
        minStack.pop();
    }
    
    int top() {
        return stacks.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
