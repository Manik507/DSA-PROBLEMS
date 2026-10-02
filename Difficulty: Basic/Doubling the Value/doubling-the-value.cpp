class Solution {
  public:
    int solve(int b, vector<int> &arr) {
        // code here.
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==b)
            {
                b=b*2;
            }
        }
        return b;
    }
};