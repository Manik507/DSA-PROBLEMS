class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++)
        {
            int minidx=i;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[minidx]>arr[j])
                {
                    minidx=j;
                }
            }
            swap(arr[i],arr[minidx]);
        }
    }
};