/* Structure of doubly linked list Node
class Node {
  public int data;
  public Node next;
  public Node prev;

  public Node(int x) {
      data = x;
      next = null;
      prev = null;
  }
};*/
class Solution {
    public List<List<Integer>> displayList(Node head) {
        // code here
        List<List<Integer>> ans=new ArrayList<>();
        ans.add(new ArrayList<>());
        ans.add(new ArrayList<>());
        Node temp=head;
        while(temp.next!=null)
        {
            ans.get(0).add(temp.data);
            temp=temp.next;
        }
        ans.get(0).add(temp.data);
        while(temp.prev!=null)
        {
            ans.get(1).add(temp.data);
            temp=temp.prev;
        }
        ans.get(1).add(temp.data);
        return ans;
        
    }
}