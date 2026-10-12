class Solution {
  public:
    int sumOfAP(int n, int a, int d) {
        // Code here.
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a;
            a+=d;
        }
        return sum;
    }
};