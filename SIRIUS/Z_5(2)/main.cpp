#include <iostream>

using namespace std;

bool dt(long long n)
{
    long long sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if(sum % 3 == 0)
        return true;
    else
        return false;
}

int main()
{
    long long n;
    cin >> n;
    for(long long i = n; i > 0; i--)
    {
        if(i % 2 == 0 && (i % 10 == 0 || i % 10 == 5) && i % 3 == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
