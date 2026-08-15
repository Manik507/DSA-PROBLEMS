class Solution {
  public:
    int sumExceptFirstLast(vector<int>& arr) {
        // code here
        int sum=0;
        for(int i=1;i<arr.size()-1;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
};