#include <iostream>
#include <cmath>
using namespace std;

bool funk(int n)
{
    if(n == 1)
    {
        return false;
    }
    int nq = sqrt(n);
    for(int i = 2; i <= nq; i++)
        if(n % i == 0)
            return false;

    return true;
}
int main()
{
    int n;
    cin >> n;
    int del = 2;
    while(n > 1)
    {
        while(n % del == 0)
        {
            cout << del << " ";
            n /= del;
        }
        del++;
    }
    cout << endl;
    return 0;
}
