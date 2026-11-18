class Solution {
  public:
    bool isBinary(string& s) {
        // code here
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1' || s[i]=='0')
            continue;
            else return false;
        }
        return true;
    }
};