class Solution {
  public:
    int diagonalSum(vector<vector<int> >& mat) {
        // Code here
        int r=mat.size();
        int c=mat[0].size();
        int sum=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                if(i==j)
                {
                    sum+=mat[i][j];
                }
            }
        }
        int i=0;
        for(int j=r-1;j>=0;j--)
        {
            sum+=mat[i][j];
            i++;
        }    

        return sum;
    }
};