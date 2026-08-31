class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        int rows=mat.size();
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        return mat;
        
        
    }
};