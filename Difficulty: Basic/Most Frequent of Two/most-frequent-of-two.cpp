class Solution {
  public:
    int moreFrequent(vector<int>& arr, int x, int y) {
        // code here
        int cnt1=0,cnt2=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                cnt1++;
            }
            else if(arr[i]==y)
            {
                cnt2++;
            }
        }
        if(cnt1>cnt2)
        {
            return x;
        }
        else if(cnt2 > cnt1)
        {
            return y;
        }
        return min(x,y);
    }
};