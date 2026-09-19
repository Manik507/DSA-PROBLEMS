class myStack {
public:
    vector<int> ans;
    int top;

    myStack(int n) {
        top = -1;
        ans.resize(n);   // Allocate space for n elements
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == ans.size() - 1;
    }

    void push(int x) {
        if (!isFull()) {
            top++;
            ans[top] = x;
        }
    }

    void pop() {
        if (!isEmpty()) {
            top--;
        }
    }

    int peek() {
        if (isEmpty())
            return -1;
        return ans[top];
    }
};