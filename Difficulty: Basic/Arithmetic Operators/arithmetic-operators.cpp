#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // code here
    int p=x+y;
    int q=x-y;
    int r=x*y;
    int s=x/y;
    int t=x%y;

    // The below code prints the output
    cout << p << " " << q << " " << r << " " << s << " " << t << endl;
    return 0;
}