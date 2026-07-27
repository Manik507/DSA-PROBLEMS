/*
class Node{
    int data;
    Node next;

    Node(int x){
        data = x;
        next = null;
    }
}
*/
class Solution {
    public Node insertAtEnd(Node head, int x) {
        // code here
        Node n1=new Node(x);
        if(head==null)
        {
            return n1;
        }
        Node temp=head;
        while(temp.next!=null)
        {
            temp=temp.next;
        }
        
        temp.next=n1;
        return head;
    }
}