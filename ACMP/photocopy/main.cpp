#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int t = (n-1)/(1.0/x + 1.0/y);
    int n0 = t/x;
    int n1 = t/y;
    n -= n0;
    n -= n1;
    int s0 = n0 * x;
    int s1 = n1 * y;
    if(x < y)
        s1 += x;
    else
        s0 += y;

    while(n)
    {
        s0 += x;
        s1 += y;
        if(s0 < s1)
            s1 -= y;
        else
            s0 -= x;

        n--;
    }
    cout << max(s0,s1) << endl;
    return 0;
}
