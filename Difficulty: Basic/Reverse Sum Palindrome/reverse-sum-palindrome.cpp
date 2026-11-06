class Solution {
  public:
  int reverse(int n)
  {
      int rev=0;
      int n1=n;
      while(n>0)
      {
          int d=n%10;
          rev=rev*10+d;
          n=n/10;
      }
      return rev;
  }
  bool isPalindrome(int n)
  {
      int rev=0;
      int n1=n;
      while(n>0)
      {
          int d=n%10;
          rev=rev*10+d;
          n=n/10;
      }
      return rev==n1;
  }
    int isSumPalindrome(int n) {
        // code here
        int final=n;
        if(isPalindrome(final))
        {
                return final;
        }
        for(int i=0;i<5;i++)
        {
            final+=reverse(final);
            if(isPalindrome(final))
            {
                return final;
            }
        }
        return -1;
    }
};