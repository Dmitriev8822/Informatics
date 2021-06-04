#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        a[i] = new int[n];

    int c = 1;

    int i = 0, j = 0;
    int m = 0;
    a[i][j] = c;

    for(; m < n - 1; m++)
    {
        for(; i < n - m - 1; i++, c++)
        {
            a[i][j] = c;
            //cout << i << " " << j << " " << c << endl;
        }
        for(; j < n - m - 1; j++, c++)
        {
            a[i][j] = c;
            //cout << i << " " << j << " " << c << endl;
        }
        for(; i > m; i--, c++)
        {
            a[i][j] = c;
            //cout << i << " " << j << " " << c << endl;
        }
        for(; j > m; j--, c++)
        {
            a[i][j] = c;
            //cout << i << " " << j << " " << c << endl;
        }
        j++; i++;
    }

    if(n % 2) a[n / 2][n / 2] = c;

    for(j = 0; j < n; j++)
        for(i = 0; i < n; i++)
            cout << a[i][j] << (i != n - 1 ? " " : "\n");

    for(int i = 0; i < n; i++)
        delete []a[i];
    delete []a;
    return 0;
}
