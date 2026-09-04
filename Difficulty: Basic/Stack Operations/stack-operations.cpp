class myStack {
  private:
    // Define your stack
    stack<int> st;
  public:
    void push(int x) {
        // insert x into stack
        
        st.push(x);
    }

    void pop() {
        if(!st.empty())
        st.pop();
        // remove top ele from stack
    }

    int peek() {
        if(!st.empty())
        return st.top();
        // return top of stack
    }

    int getSize() {
        return st.size();
        // return current size of stack
    }

    bool isEmpty() {
        return st.size()==0;
        // check whether stack is empty
    }
};