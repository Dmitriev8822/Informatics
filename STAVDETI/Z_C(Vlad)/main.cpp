
#include <iostream>

using namespace std;

int main()
{
    int ***arr;
    int n, m, k, i;
    cin >> n >> m >> k >> i;

    arr = new int**[n];

    for(int x = 0; x < n; x++)
    {
        arr[x] = new int*[m];
        for(int y = 0; y < m; y++)
            arr[x][y] = new int[k];
    }


    for(int a = 0; a < n; a++)
        for(int b = 0; b < m; b++)
            for(int c = 0; c < k; c++)
                cin >> arr[a][b][c];

    int f = 1;
    for(int a = n - 1; a >= 0; a--)
        for(int b = m - 1; b >= 0; b--)
            for(int c = k - 1; c >= 0; c--, f++)
            {
                if(f == i)
                {
                    cout << a + 1 << " " << b + 1 << " " << c + 1 << " " << arr[a][b][c] << endl;
                    return 0;
                }
            }


    return 0;
}

