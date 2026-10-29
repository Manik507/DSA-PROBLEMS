/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        vector<int> ans;
        Node *temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        int n=ans.size();
        
        int i=n-1;
        while(temp!=NULL)
        {
            if(temp->data!=ans[i])
            {
                return false;
            }
            temp=temp->next;
            i--;
        }
        return true;
    }
};