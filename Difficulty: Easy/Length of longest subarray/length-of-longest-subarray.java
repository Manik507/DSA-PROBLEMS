class Solution {
    public int longestSubarray(int arr[]) {
        // code here
        int max= 0;
               int count = 0;
               for(int i = 0; i < arr.length; i++) {

                   if(arr[i]>=0) {
                       count++;
                       max= Math.max(max, count);
                   } else {
                       count = 0;
                   }
               }
               return max;
    }
}