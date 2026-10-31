class Solution {
  public:
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> ans;
        int f=0,s=1,t=f+s;
        for(int i=0;i<n;i++)
        {
            ans.push_back(f);
            f=s;
            s=t;
            t=f+s;
        }
        return ans;
    }
};