class Solution {
  public:
    void removeCharacter(string &s, char c) {
        // code here
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=c)
            ans+=s[i];
        }
        s=ans;
    }
};