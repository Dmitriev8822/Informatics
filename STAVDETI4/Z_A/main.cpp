#include <iostream>

using namespace std;

int main()
{
    int d, m, g;
    cin >> d >> m >> g;
    int a, b, c;
    cin >> a >> b >> c;
    if(b < m || a < d && b == m)
        cout << c - g - 1;
    else
        cout << c - g;
    return 0;
}

