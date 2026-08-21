class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        // code here
        int l=0;
        int r=arr.size()-1;
        while(l<r)
        {
            if(arr[l]!=arr[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
