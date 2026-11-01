class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // code here 
        int ans=-1;
        int l=0;
        int r=arr.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]==1)
            {
                ans=mid;
                r=mid-1;
            }
            else if(arr[mid]==0)
            {
                l=mid+1;
            }
        }
        return ans;
    }
};