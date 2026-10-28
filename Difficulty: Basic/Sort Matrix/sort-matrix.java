class Solution {
    public int[][] sortedMatrix(int mat[][]) {
        // code here
        int n=mat.length;
        int k=0;
        int ans[]=new int[n*n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[k]=mat[i][j];
                k++;
            }
        }
        Arrays.sort(ans);
        k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j]=ans[k];
                k++;
            }
        }
        return mat;
    }
};