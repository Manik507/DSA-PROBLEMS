class Solution {
    static ArrayList<Integer> removeDuplicate(int arr[]) {
        // code here
        LinkedHashSet<Integer> nums=new LinkedHashSet<Integer>();
        
        for(int n:arr)
        {
            nums.add(n);
        }
        
        ArrayList<Integer> ans=new ArrayList<>(nums);
        return ans;
    }
}