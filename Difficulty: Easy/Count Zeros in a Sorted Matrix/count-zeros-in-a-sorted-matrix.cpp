class Solution {
  public:
    int countZeros(vector<vector<int>>& mat) {
        // code here
        int cnt=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                cnt++;
            }
        }
        return cnt;
    }
};