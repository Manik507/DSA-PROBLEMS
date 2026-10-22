/*class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}*/
class Solution {
    public Node insertIntoEmpty(Node last, int data) {
        // code here
        Node newNode=new Node(data);
        if(last==null)
        {
            newNode.next=newNode;
            last=newNode;
        }
        return last;
    }
}
