#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    long long buf[30];
    cin >> x >> y;
    int k = 1, k1 = 0;
    while(k <= 32767)
    {
        buf[0] = k;
        while(k1 < k)
        {
            buf[1] = k1;
            for(int i = 2; i < x; i++)
            {
                buf[i] = buf[i - 1] + buf[i - 2];
                if(buf[i] > y)
                    break;
                else if(buf[i] == y && i + 1 == x)
                {
                    cout << k << " " << k1;
                    return 0;
                }
            }
            k1++;
        }
        k++;
        k1 = 0;
    }
    return 0;
}
