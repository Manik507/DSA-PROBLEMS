class Solution {
  public:
    void printFloydTriangle(int n) {
        // code here
        int cnt=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<cnt<<" ";
                cnt++;
            }
            cout<<endl;
        }
    }
};