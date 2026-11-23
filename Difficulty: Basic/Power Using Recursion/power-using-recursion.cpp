class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
        if(p==0)
        return 1;
        if(p==1)
        return n;
        return n*recursivePower(n,p-1);
    }
};
