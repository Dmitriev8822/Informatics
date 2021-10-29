#include <iostream>

using namespace std;

int buf[100001];

int nod(int n, int m)
{
        if(n == m)
            return n;
        if(n < m)
            return nod(n, m - n);

        return nod(n - m, m);
}

int main()
{
    int n;
    cin >> n;
    if(n == 1)
    {
        int x;
        cin >> x;
        cout << x << endl;
        cout << 1 << endl;
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        cin >> buf[i];
    }
    int nodik = nod(buf[0], buf[1]);
    for(int i = 2; i < n; i++)
    {
        nodik = nod(nodik, buf[i]);
    }
    int summ = 0;
    for(int i = 0; i < n; i++)
        summ += buf[i] / nodik;
    cout << nodik << endl;
    cout << summ << endl;
    return 0;
}
