#include <iostream>

using namespace std;

const int K = 1e8 + 5;
int a[K];
int b[K];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++)
        a[i] = i;

    int p;
    while(n > 1)
    {
        p = 1;
        for(int i = 1; i <= n; i += 2)
        {
            b[p] = a[i];
            p++;
        }
        n = n / 2 + n % 2;
        p = 1;
        for(int i = 2; i <= n; i += 2, p++)
            a[p] = b[i];

        p = 1;
        n /= 2;
        for(int i = 1; i <= n; i++)
        while(i % 3)
        {
            b[p] = a[i];
            i++;
            p++;
        }
        n -= n / 3;
        for(int i = 1; i <= n; i++)
            a[i] = b[i];
    }
    cout << a[1] << endl;;
    return 0;
}
