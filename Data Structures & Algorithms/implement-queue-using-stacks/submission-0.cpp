#include<stack>
class MyQueue {
private:
    std::stack<int> stosadd, stosrem;
public:
    MyQueue() {}
    
    void push(int x) {
        stosadd.push(x);
    }   
    
    int pop() {
        if (stosrem.empty()){
            while(!stosadd.empty()){
                stosrem.push(stosadd.top());
                stosadd.pop();
            }
        }
        int result = stosrem.top();
        stosrem.pop();
        return result;
    }
    
    int peek() {
        if (stosrem.empty()){
            while(!stosadd.empty()){
                stosrem.push(stosadd.top());
                stosadd.pop();
            }
        }
        return stosrem.top();
    }
    
    bool empty() {
        return stosrem.empty() && stosadd.empty();
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