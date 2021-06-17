#include <iostream>

using namespace std;

int main()
{
    long long n, m, k;
    cin >> m >> n >> k;
    if(k % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
    long long sum = (n + m) * (n - m + 1) / 2;
    if (sum % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
    return 0;
}
