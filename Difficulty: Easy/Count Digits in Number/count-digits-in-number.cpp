class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int sum=0;
        if(n==0)
        return 1;
        while(n>0)
        {
            sum+=1;
            n/=10;
        }
        return sum;
    }
};