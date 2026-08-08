class Solution {
    public boolean binarySearch(int[] arr, int k) {
        // code here
        int mid=arr.length/2;
        int l=0;
        int r=arr.length-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(arr[mid]==k)
            return true;
            
            if(arr[mid]>k)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return false;
    }
}