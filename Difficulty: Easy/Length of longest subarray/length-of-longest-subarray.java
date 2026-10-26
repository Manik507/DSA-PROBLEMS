class Solution {
    public int longestSubarray(int arr[]) {
        // code here
        int l=0;
        int cnt=0;
        int maxcnt=0;
        for(l=0;l<arr.length;l++)
        {
            if(arr[l]>=0)
            {
                cnt++;
                maxcnt=Math.max(cnt,maxcnt);
            }
            else
            {
                cnt=0;
            }
        }
        return maxcnt;
    }
}