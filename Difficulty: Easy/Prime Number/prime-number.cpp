
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if(n==0 || n==1)
        return false;
        int f=0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==1) return false;
        return true;
    }
};


