class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        vector<int> ans;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                ans.push_back(arr[i]);
            }
        }

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<0)
            ans.push_back(arr[i]);
        }
        arr=ans;
    }
};