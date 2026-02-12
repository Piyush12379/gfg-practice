class myStack {
    queue<int> q1,q2;

  public:

    void push(int x) {
        // Inserts an element x at the top of the stack
        q2.push(x);
        
        while(!q1.empty()){
            int k=q1.front();
             q1.pop();
             q2.push(k);
        }
        
        swap(q1,q2);
    }

    void pop() {
        if(!q1.empty()){
              q1.pop();
        }
      
        
        // Removes an element from the top of the stack
    }

    int top() {
        
        if(!q1.empty()){
            return q1.front();
        }
        else{
            return -1;
        }
        // Returns the top element of the stack
        // If stack is empty, return -1
    }

    int size() {
        return q1.size();
        // Returns the current size of the stack
    }
};
