#include <iostream>

using namespace std;

bool weight(int a, int b, int c, int w)
{
    if(a+b <= w || a+c <= w || b+c <= w || a+b+c <= w)
        return true;
    else
        return false;
}

bool quantity(int a1, int b1, int c1, int k)
{
    if(a1+b1 <= k || a1+c1 <= k || b1+c1 <= k || a1+b1+c1 <= k)
        return true;
    else
        return false;
}
int main()
{
    int k, w;
    int a, b, c, a1, b1, c1;
    cin >> k >> w;
    cin >> a >> a1 >> b >> b1 >> c >> c1;

    bool wres = weight(a, b, c, w);
    bool kres = quantity(a1, b1, c1, k);

    if(wres && kres)
        cout << "YES"<< endl;
    else
        cout << "NO" << endl;
    return 0;
}
