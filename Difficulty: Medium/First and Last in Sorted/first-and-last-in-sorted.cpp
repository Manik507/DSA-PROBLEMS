class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int f=-1,l=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                l=i;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                f=i;
                break;
            }
        }
        vector<int> ans;
        ans.push_back(f);
        ans.push_back(l);
        return ans;
    }
};