class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
        int curr=start;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=curr && i==arr.size()-1)
            {
                return false;
            }
            else if(arr[i]==curr && curr<=end)
            {
                curr++;
                if(curr>end)
                {
                    return true;
                }
                i=-1;
                
            }
        }
        
        return true;
        
    }
};
