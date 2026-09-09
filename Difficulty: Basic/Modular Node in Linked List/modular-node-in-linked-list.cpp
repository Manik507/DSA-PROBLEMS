/*Struture of the node of the linked list is as:

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    int modularNode(Node *head, int k) {
        // code here
        int pos=1;
        int t=-1;
        Node *temp=head;
        while(temp)
        {
            if(pos%k==0)
            t=temp->data;
            pos++;
            temp=temp->next;
        }
        return t;
    }
};