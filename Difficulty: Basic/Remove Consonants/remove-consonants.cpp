class Solution {
  public:
    string remConsonants(string &s) {
        // code here
        vector<char> v;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            {
                v.push_back(c);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i];
        }
        return ans;
    }
};