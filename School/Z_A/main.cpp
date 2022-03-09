#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long cnt = 0;
    for(long long i = 0; i <= d; i++)
    {
        long long x = b*i + c;
        if(a <= i && i <= d)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
