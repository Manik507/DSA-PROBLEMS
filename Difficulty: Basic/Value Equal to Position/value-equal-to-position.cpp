class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        // code here
        vector<int> ans;
        int pos=1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==pos)
            {
                ans.push_back(arr[i]);
            }
            pos++;
        }
        return ans;
    }
};