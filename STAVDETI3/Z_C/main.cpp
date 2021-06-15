#include <iostream>

using namespace std;

bool ans(int a, int a1, int b, int b1, int c, int c1, int w, int k)
{
    if( a + b <= w && a1 + b1 >= k || b + c <= w && b1 + c1 >= k || a + c <= w && a1 + c1 >= k || a+b+c <= w && a1+b1+c1 >=k || a <= w && a1 >= k || b <= w && b1 >= k || c <= w && c1 >= k)
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

    bool kres = ans(a, a1, b, b1, c, c1, w, k);

    if(kres)
        cout << "YES"<< endl;
    else
        cout << "NO" << endl;
    return 0;
}
