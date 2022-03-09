#include <iostream>

using namespace std;

int main()
{
    long n;
    long k;
    cin >> n >> k;
    long summ = 0;
    long x = n % 10;
    for(long i = 0; i < k; i++)
    {
        summ += x;
        x = (x * 2) % 10;
    }
    cout << summ + n << endl;
    return 0;
}
