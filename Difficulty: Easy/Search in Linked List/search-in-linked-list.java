/* Structure of Linked List Node
class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}*/

class Solution {
    public boolean searchKey(Node head, int key) {
        // Code here
        while(head!=null)
        {
            if(key==head.data)
            return true;
            head=head.next;
        }
        return false;
    }
}