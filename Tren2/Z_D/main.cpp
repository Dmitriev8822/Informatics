#include <iostream>

using namespace std;

int fib(int n)
{
    int f1 = 1;
    int f2 = 1;
    int f3;
    for(int i = 2; i <= n; i++)
    {
        f3 = (f1 + f2) % 10;
        f1 = f2;
        f2 = f3;
    }
    return f3;
}
int main()
{
    int n;
    cin >> n;
    if(n == 1)
        cout << 1 << endl;
    else
        cout << fib(n) << endl;
    return 0;
}
