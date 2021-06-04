#include <iostream>
#include <algorithm>

using namespace std;

bool has_num(int a[], int n, int k)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == k) return 1;
    }
    return 0;
}

int main()
{
    int a1[2001], a2[2001], a3[4002];
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        cin >> a1[i];
    }
    cin >> m;
    for(int i = 0; i < m; i ++)
    {
        cin >> a2[i];
    }

    int k = 0;

    for(int i = 0; i < n; i ++)
    {
        if(has_num(a3, k, a1[i])) continue;
        a3[k] = a1[i];
        k++;
    }

    for(int i = 0; i < m; i ++)
    {
            if(has_num(a3, k, a2[i])) continue;
            a3[k] = a2[i];
            k++;
    }

    sort(a3, a3 + k);

    for(int i = 0; i < k; i++)
    {
        cout << a3[i] << (i != k - 1 ? " " : "\n");
    }

    return 0;
}
