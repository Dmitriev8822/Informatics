#include <iostream>

using namespace std;

int main()
{
    int a[1002], k, m, n, h = 0;
    cin >> k >> m >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 1; i < n; i++)
        for(int j = n-1; j >= i; j--)
            if(a[j] < a[j-1])
                swap(a[j], a[j-1]);

    for(int i = 0; i < k; i++)
        m -= a[i];

    cout << m << endl;
    return 0;
}
