#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int s0 = 0;
    int s1 = 0;

    if(x < y)
        s1 += x;
    else
        s0 += y;

    while(n)
    {
        int a1 = s1 + y;
        int a0 = s0 + x;
        if(a1 > a0)
            s0 = a0;
        else
            s1 = a1;
        n--;
    }
    cout << max(s0, s1) << endl;
    return 0;
}
