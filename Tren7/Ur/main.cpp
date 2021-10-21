#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int y = 1;
    double res = 0.0;
    int resx = -1;
    int resy = -1;
    int resres = -1;
    while(x <= 10)
    {
        while(y <= 10)
        {
            res = ((6 * x + 6) / x) * ((y * 4 + 1) / 4);
            cout << "Ur 1 = " << (6 * x + 6) / x << endl;
            cout << "Ur 2 =  " << ((y * 4 + 1) / 4) << endl;
            cout << x << " " << y << " " << res << endl;
            if(res == 57)
            {
                resx = x;
                resy = y;
                resres = res;
            }
            y++;
        }
        x++;
        y = 0;
    }
    cout << resx << " " << resy << " " << resres << endl;
    return 0;
}
