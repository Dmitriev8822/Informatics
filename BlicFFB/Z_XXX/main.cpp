#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, g, hl, m;
    cin >> h >> m;
    g = m / 12;
    hl = h * 5;
    if(m > hl)
        if((max(hl, m) - min(hl, m) - g) * 6 > 180)
            cout << 360 - (max(hl, m) - min(hl, m) - g) * 6;
        else
            cout << (max(hl, m) - min(hl, m) - g) * 6;
    else
        if((max(hl, m) - min(hl, m) + g) * 6 > 180)
            cout << 360 - (max(hl, m) - min(hl, m) + g) * 6;
    else
        cout << (max(hl, m) - min(hl, m) + g) * 6;
return 0;
}
