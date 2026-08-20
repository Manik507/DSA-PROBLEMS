class Solution {
  public:
    int minValueToBalance(vector<int> &arr) {
        // code here
        int n=arr.size();
        int sum1=0;
        int sum2=0;
        int i=0;
        for(i=0;i<n/2;i++)
        {
            sum1+=arr[i];
        }
        while(i<n)
        {
            sum2+=arr[i];
            i++;
        }
        return abs(sum1-sum2);
    }
};
