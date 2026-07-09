class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int ans = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= x) {
                ans = i;
            } else {
                break;
            }
        }

        return ans;
    }
};