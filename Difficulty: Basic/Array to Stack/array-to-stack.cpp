class Solution {
  public:

    // Push elements of an array into a stack.
    stack<int> push(vector<int> &arr) {

        stack<int> s;

        for(int i = 0; i < arr.size(); i++)
        {
            s.push(arr[i]);
        }

        return s;
    }

    // Print elements of a stack and pop them.
    void printAndPop(stack<int> s) {

        while(!s.empty())
        {
            int x = s.top();
            s.pop();
            cout << x << " ";
        }
    }
};
