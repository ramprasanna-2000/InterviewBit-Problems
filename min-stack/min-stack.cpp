class MinStack {
public:
    /** initialize your data structure here. */
    stack<long long> s;
    long long mini;
    MinStack() {
        mini = INT_MAX;
    }
    
    void push(int val) {
        long long value = val;
        if(s.empty())
        {
            s.push(value);
            mini = value;
        }
        
        else {
            if(value < mini)
            {
                s.push(2*value-mini);
                mini = value;
            }
            else{
                s.push(value);
            }
        }
    }
    
    void pop() {
        if(s.empty())
        {
            return;
        }
        
        long long el = s.top();
        s.pop();
        
        if(el < mini)
        {
            mini = 2 * mini - el;
        }
    }
    
    int top() {
        if(s.empty())
        {
            return -1;
        }
        
        long long el = s.top();
        
        if(el < mini)
        {
            return mini;
        }
        
        return el;
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */