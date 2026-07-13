/* Structure of a Node
class Node {
    int data;
    Node next;

    public Node(int data){
        this.data = data;
        this.next = null;
    }
}*/
class Solution {
    public boolean areIdentical(Node head1, Node head2) {
        // code here
        Node temp1=head1;
        Node temp2=head2;
        int cnt1=0;
        int cnt2=0;
        while(temp1!=null)
        {
            cnt1++;
            temp1=temp1.next;
        }
        while(temp2!=null)
        {
            cnt2++;
            temp2=temp2.next;
        }
        if(cnt1!=cnt2)
        {
            return false;
        }
        temp1=head1;
        temp2=head2;
        while(temp1!=null && temp2!=null)
        {
            if(temp1.data==temp2.data)
            {
                temp1=temp1.next;
                temp2=temp2.next;
            }
            else if(temp1.data!=temp2.data)
            {
                return false;
            }
        }
        return true;
    }
}