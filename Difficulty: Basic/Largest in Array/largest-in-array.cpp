class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int num=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>num)
            {
                num=arr[i];
            }
        }
        return num;
    }
};
