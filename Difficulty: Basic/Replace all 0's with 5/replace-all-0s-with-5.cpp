class Solution {
  public:
    int convertFive(int n) {
        // code here
        if(n==0)
        return 5;
        int temp=n;
        int ans=0;
        
        while(temp>0)
        {
            int d=temp%10;
            if(d==0)
            d=5;
            ans=ans*10+d;
            temp/=10;
        }
        temp=ans;
        ans=0;
        while(temp>0)
        {
            int d=temp%10;
            if(d==0)
            d=5;
            ans=ans*10+d;
            temp/=10;
        }
        return ans;}
};