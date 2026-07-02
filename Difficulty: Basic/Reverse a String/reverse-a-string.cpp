class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string str="";
        for(int i=s.length()-1;i>=0;i--)
        {
            str+=s[i];
        }
        return str;
    }
};
