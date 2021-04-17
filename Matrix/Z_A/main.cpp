#include <iostream>

using namespace std;

int main()
{
    int A[20][20];
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> A[i][j];
    int x;
    cin >> x;
    int res = 0;
    for(int i = 0; i < x; i++)
    {
        int b, c;
        cin >> b >> c;
        res += A[b-1][c-1];
    }
    cout << res << endl;
    return 0;
}
