class Solution {
  public:
    bool isBuzz(int n) {
        //  code here
        int d=n%10;
        if(n%7==0 || d==7)
        {
            return true;
        }
        return false;
    }
};