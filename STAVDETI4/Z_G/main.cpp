#include <iostream>

using namespace std;

int rdiv(const int *p, int len, int divider)
{
    int remainder = 0;

    while(len > 0)
    {
        remainder = remainder * 10 + *p++;
        len--;
        if(remainder >= divider)
            remainder = remainder % divider;
    }
    return remainder;
}

int main()
{
    int A[1001];
    int n;
    cin >> n;
    for(int j=0; j<n; j++)
        cin >> A[j];
    int m;
    cin >> m;

    int res = rdiv(A, n, m);
    if(res == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
