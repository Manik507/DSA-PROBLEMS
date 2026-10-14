class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        // code here
        if(b==0)
        return 1;
        long long n=a;
        int d=0;
        for(int i=0;i<b-1;i++)
        {
            n=n*a;
        }
        while(k>0)
        {
            d=n%10;
            n/=10;
            k--;
        }
        return d;
    }
};