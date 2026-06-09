class MinStack {
    stack<int> stk;
    stack<int> minVal;

public:
    MinStack() {
    }
    
    void push(int val) {
        stk.push(val);
        if(minVal.empty() || val <= minVal.top()) minVal.push(val);
    }


    
    void pop() {
        
    if(stk.empty()) return;
       
    if(minVal.top() == stk.top()){ 
        minVal.pop();
    }
     
     stk.pop();
        
    }
    
    int top() const{
        if(!stk.empty())  return stk.top();
        return 0;
    }
    
    int getMin() const {
        if(!stk.empty()) return minVal.top();
        return 0;
    }
};
