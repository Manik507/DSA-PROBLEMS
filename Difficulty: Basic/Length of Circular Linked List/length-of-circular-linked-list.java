/* Linked List Node Structure
class Node
{
    int data;
    Node next;
    Node(int data)
    {
        this.data = data;
        this.next = null;
    }
}
*/
class Solution {
    public static int getLength(Node head) {
        // code here
        Node temp=head;
        int count=0;
        do
        {
            count++;
            temp=temp.next;
        }while(temp!=head);
        return count;
    }
}