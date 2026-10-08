class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        // code here
        vector<int> ans(2,0);
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=target)
            ans[0]++;
            if(arr[i]>=target)
            {
                ans[1]++;
            }
        }
        return ans;
    }
};