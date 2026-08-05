/* structure of link list node
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}
*/
class Solution {
    public boolean isEven(Node head) {
        // code here
        Node temp=head;
        int cnt=0;
        while(head!=null)
        {
            cnt++;
            head=head.next;
        }
        if(cnt%2==0)
        return true;
        return false;
    }
}