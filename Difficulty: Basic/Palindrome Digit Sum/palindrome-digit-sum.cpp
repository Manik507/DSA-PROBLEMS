class Solution {
  public:
    bool isPalindrome(int n)
    {
        int n1=n;
        int sum=0;
        while(n1>0)
        {
            int d=n1%10;
            sum=sum*10+d;
            n1=n1/10;
        }
        return sum==n;
    }
    bool isDigitSumPalindrome(int n) {
        // code here
        int n1=n;
        int sum=0;
        while(n1>0)
        {
            int d=n1%10;
            sum=sum+d;
            n1=n1/10;
        }
        if(isPalindrome(sum))
        return true;
        return false;
    }
};