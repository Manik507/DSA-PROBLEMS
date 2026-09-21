class Solution {
  public:
    void swapTriangle(vector<vector<int>>& mat) {
        // code here
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<i;j++)
            swap(mat[i][j],mat[j][i]);
        }
    }
};