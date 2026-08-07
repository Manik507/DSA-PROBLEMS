class Solution {
    public double findMedian(int[] arr) {
        // Code here.
        Arrays.sort(arr);
        int n=arr.length;
        double res;
        if(n%2==0)
        {
            res=(arr[n/2]+arr[(n/2)-1])/2.0;
        }
        else res=arr[n/2];
        return res;
    }
}
