class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int cnt=0;
        int c;
        for(int ele:arr)
        {
            if(cnt==0)
            {
                c=ele;
            }
            if(ele==c)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        cnt=0;
        for(int ele:arr)
        {
            if(c==ele)
            {
                cnt++;
            }
        }
        if(cnt>arr.size()/2)
        {
            return c;
        }
        else
        {
            return -1;
        }
    }
};