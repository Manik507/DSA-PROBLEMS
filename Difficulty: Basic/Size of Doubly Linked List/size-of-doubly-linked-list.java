/*
class Node {
    int data;
    Node next;
    Node prev;

    Node(int a) {
        data = a;
        next = null;
        prev = null;
    }
} */

class Solution {
    public int findSize(Node head) {
        // Code Here
        int cnt=0;
        while(head!=null)
        {
            cnt++;
            head=head.next;
        }
        return cnt;
    }
}
