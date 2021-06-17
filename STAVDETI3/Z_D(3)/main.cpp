#include <iostream>

using namespace std;

bool step(int k)
{
    bool f = true;
    int i = 1;
    while(i <= k)
    {
        if(i == k)
        {
            f = false;
            break;
        }
        i *= 2;
    }
    return f;
}

int divisor(int k)
{
    int cnt = 0;
    while(k != 1)
    {
        if(step(k))
            cnt++;

        k /= 2;
        cnt++;
        //cout << "cnt = " << cnt << endl;
    }
    return cnt;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << divisor(n) + divisor(m);
    return 0;
}
