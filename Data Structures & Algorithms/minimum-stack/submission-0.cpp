class MinStack {
public:   
  stack<int>a;
       stack<int>m;
    MinStack() {
   
    }
    
    void push(int val) {
       a.push(val);
       if(m.empty() || m.top()>=val)m.push(val);
    }
    
    void pop() {
        if(a.top()==m.top())m.pop();
        a.pop();

    }
    
    int top() {
        return a.top();
    }
    
    int getMin() {
        return m.top();
    }
};
