class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rev=0;
        int d;
        int n1=n;
        while(n>0)
        {
            d=n%10;
            rev=rev*10+d;
            n/=10;
        }
        return rev;
    }
};