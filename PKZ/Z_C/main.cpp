#include <iostream>

using namespace std;

unsigned int getRoot(unsigned int n)
{
    unsigned int res = 0;
    while(n)
    {
        res += n%10;
        n /= 10;
    }
    return res;
}


int main()
{
    unsigned int n;
    cin >> n;
    unsigned int res = getRoot(n);
    while(res >= 10)
        res = getRoot(res);
    cout << res << endl;

    return 0;
}
