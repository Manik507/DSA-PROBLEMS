class Solution {
  public:
  bool isPalindrome(int n)
  {
      int n1=n;
      int r=0;
      while(n1>0)
      {
          int d=n1%10;
          r=r*10+d;
          n1/=10;
      }
      return n==r;
  }
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++)
        {
            if(!isPalindrome(arr[i]))
            {
                return false;
            }
        }
        return true;
    }
    
};