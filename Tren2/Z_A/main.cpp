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
    int k;
    if(n%2 == 0)
        k = n / 2;
    else
        k = n / 2 + 1;

    if(mxst > k)
        cout << n + mnst - mxst - 1 << endl;
    else
        cout << abs(st1 - st2) - 1 << endl;
    return 0;
}
