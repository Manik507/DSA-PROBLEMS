class Solution {
  public:
    int sumOfMatrix(vector<vector<int>>& mat) {
        // code here
        int sum=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                sum+=mat[i][j];
            }
        }
        return sum;
    }
};