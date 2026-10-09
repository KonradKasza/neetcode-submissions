#include <queue>

class MyStack {
private:
    std::queue<int> q1;
    std::queue<int> q2;

public:
    MyStack() {}
    
    void push(int x) {
        q1.push(x);

    }
    
    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int val = q1.front();
        q1.pop();
        std::swap(q1, q2);
        return val;
    }
    
    int top() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int val = q1.front();
        q2.push(val);
        q1.pop();
        std::swap(q1, q2);
        return val;
    }
    
    bool empty() {
        return q1.empty();
    }
};