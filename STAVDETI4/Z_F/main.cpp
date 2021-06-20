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
    int divider = 3;  //порция меда
    cin >> n;
    for(int j=0; j<n; j++)
        cin >> A[j];

    int res = rdiv(A, n, divider);
    cout << res;

    return 0;
}
