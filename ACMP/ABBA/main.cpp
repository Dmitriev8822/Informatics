#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int m = 0;
    int f = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x = i;
        while(x % 2 == 0)
        {
            x = trunc(x / 2);
            m += 1;
        }
        while(x % 5 == 0)
        {
            x = trunc(x / 5);
            m -= 1;
        }
        f = f * x % 10;
    }
    f = (f << m) % 10;
    cout << f << endl;
    return 0;
}
