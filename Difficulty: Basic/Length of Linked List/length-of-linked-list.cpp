/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int c=0;
        while(head!=NULL)
        {
            c++;
            head=head->next;
        }
        return c;
    }
};