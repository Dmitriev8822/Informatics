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

bool two(int n1, int n2)
{
    if(n1 % 2 == 0)
        return true;
    else
        return false;
}

bool three(int sum3)
{
    if(sum3 % 3 == 0)
        return true;
    else
        return false;
}

bool four(int n1, int n2)
{
    if(n1 == 0 && n2 == 0 || n2*10+n1 % 4 == 0 || n2 == -1 && n1 == 4 || n2 == -1 && n1 == 8)
        return true;
    else
        return false;
}

bool five(int n1, int n2)
{
    if(n1 == 5 || n1 == 0 && n2 != -1)
        return true;
    else
        return false;
}

bool eight(int n1, int n2, int n3)
{
    int t = n3*100+n2*10+n1;
    if(t%8 == 0 || n1 == 0 && n2 == 0 && n3 == 0)
        return true;
    else
        return false;
}

bool nine(int sum3)
{
    if(sum3%9 == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    int sum3 = 0;
    int cnth = 0;
    bool k = true;
    int n1 = -1, n2 = -1, n3 = -1;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if(k)
        {
            cnth += t;
            k = false;
            //cout << "cnth = " << cnth << endl;
        }
        else
        {
            cnth -= t;
            k = true;
            //cout << "cnth = " << cnth << endl;
        }
        sum3 += t;
        if(i == n-3)
            n3 = t;
        if(i == n-2)
            n2 = t;
        if(i == n-1)
            n1 = t;
    }
    bool f = true;
    int m;
    cin >> m;
    if(m == 2 && two(n1, n2))
    {
        cout << "YES" << endl;
        f = false;
    }
    if(m == 3 && three(sum3))
    {
        cout << "YES" << endl;
        f = false;
    }
    if(m == 4 && four(n1, n2))
    {
        cout << "YES" << endl;
        f = false;
    }
    if(m == 5 && five(n1, n2))
    {
        cout << "YES" << endl;
        f = false;
    }
    if(m == 6 && two(n1, n2) && three(sum3))
    {
        cout << "YES" << endl;
        f = false;
    }
    if(m == 8 && eight(n1, n2, n3))
    {
        cout << "YES" << endl;
        f = false;
    }
    if(m == 9 && nine(sum3))
    {
        cout << "YES" << endl;
        f = false;
    }
    if(m == 10 && n1 == 0)
    {
        cout << "YES" << endl;
        f = false;
    }
    if(m == 11 && cnth % 11 == 0)
    {
        cout << "YES" << endl;
        f = false;
    }

    if(f)
        cout << "NO" << endl;

    int A[1001];
    cin >> n;
    for(int j=0; j<n; j++)
        cin >> A[j];
    cin >> m;

    int res = rdiv(A, n, m);
    if(res == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
