#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int st1;
    int st2;
    cin >> n >> st1 >> st2;
    int mxst = max(st1, st2);
    int mnst = min(st1, st2);
    int var1 = mxst - mnst - 1;
    int var2 = n - mxst + mnst - 1;
    cout << min(var1, var2) << endl;
    return 0;
}
