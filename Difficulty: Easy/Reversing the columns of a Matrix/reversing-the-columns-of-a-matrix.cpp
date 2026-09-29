class Solution {
  public:

    void reverseCol(vector<vector<int> > &matrix) {
        // code here
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c/2;j++)
            {
                swap(matrix[i][j],matrix[i][c-j-1]);
            }
        }
    }
};