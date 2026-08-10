class Solution {
  public:
    bool checkSpy(int n) {
        // code here
        int n1=n;
        int d;
        int sum=0,product=1;
        while(n>0)
        {
            d=n%10;
            sum+=d;
            product*=d;
            n=n/10;
        }
        return sum==product;
    }
};
