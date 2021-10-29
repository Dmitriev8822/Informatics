#include <iostream>

using namespace std;

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
    int m;
    cin >> n >> m;
    cout << nod(n, m) << endl;
    return 0;
}
