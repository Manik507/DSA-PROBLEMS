class Solution {
  public:
    int count=2;
    int sum=0;
    void myFun()
    {
        sum+=count*count;
        count+=2;
    }
    int sumSqEven(int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            myFun();
        }
        return sum;
    }
};