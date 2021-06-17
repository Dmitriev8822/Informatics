#include <iostream>

using namespace std;


int getBends(int n)
{
    int cnt = 0;
    while(n >= 2)
    {
        if(n%3 == 0)
        {
            n /= 3;
            cnt++;
        }
        else
        {
            if(n % 2)
            cnt += n % 2;
            n /= 2;
        }
        cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    int m;

    cin >> n >> m;

    cout << getBends(n) + getBends(m);

    return 0;
}
