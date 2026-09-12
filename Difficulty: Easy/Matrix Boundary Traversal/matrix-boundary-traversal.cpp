class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        // code here
        int r=mat.size()-1;
        int c=mat[0].size()-1;
        vector<int> ans;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(i==0 || j==c)
                ans.push_back(mat[i][j]);
                
            }
        }
        for(int i=r;i>0;i--)
        {
            for(int j=c-1;j>=0;j--)
            {
                if(i==r || j==0)
                ans.push_back(mat[i][j]);
            }
        }
        return ans;
    }
};
