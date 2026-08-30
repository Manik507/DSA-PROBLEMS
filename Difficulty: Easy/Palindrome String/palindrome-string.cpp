class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
         int n=s.length();
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
};