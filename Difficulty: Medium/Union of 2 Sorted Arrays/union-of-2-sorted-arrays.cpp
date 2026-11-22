class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int> bns;
        for(auto x:a)
        {
            bns.insert(x);
        }
        for(auto x:b)
        {
            bns.insert(x);
        }
        vector<int> ans;
        for(auto x:bns)
        {
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};