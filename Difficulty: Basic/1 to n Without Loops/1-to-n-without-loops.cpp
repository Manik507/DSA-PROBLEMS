class Solution {
  public:
  void myFun(int n)
  {
      if(n==1)
      {
          cout<<"1 ";
          return;
      }
      myFun(n-1);
      cout<<n<<" ";
      
  }
    void printTillN(int n) {
        // code here
        myFun(n);
    }
};