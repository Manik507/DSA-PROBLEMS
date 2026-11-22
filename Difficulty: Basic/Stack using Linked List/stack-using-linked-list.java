/* Structure of linked list Node
class Node {
    int data;
    Node next;

    Node(int val) {
        data = val;
        next = null;
    }
}*/

class myStack {
    Node root;
    int count;
    public myStack() {
        // Initialize your data members
        root=null;
        count=0;
    }

    public boolean isEmpty() {
        // check if the stack is empty
        return root==null;
    }

    public void push(int x) {
        // Adds an element x at the rear of the stack.
        Node newNode=new Node(x);
        newNode.next=root;
        root=newNode;
        count++;
    }

    public void pop() {
        // Removes the front element of the stack.
        root=root.next;
        count--;
    }

    public int peek() {
        // Returns the front element of the stack.
        // If stack is empty, return -1.
        if(root==null)
        return -1;
        return root.data;
    }

    public int size() {
        // Returns the current size of the stack.
        return count;
    }
}
