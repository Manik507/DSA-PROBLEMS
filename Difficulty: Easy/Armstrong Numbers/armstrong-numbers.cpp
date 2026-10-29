class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int n1=n;
        int res=0;
        while(n>0)
        {
            int d=n%10;
            res=res+d*d*d;
            n/=10;
        }
        return res==n1;
    }
};