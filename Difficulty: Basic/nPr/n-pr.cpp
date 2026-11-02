class Solution {
  public:
    long long nPr(int n, int r) {
        // code here
        long long fact=1;
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        long long fact2=1;
        int m=n-r;
        for(int i=1;i<=m;i++)
        {
            fact2*=i;
        }
        return fact/fact2;
    }
};