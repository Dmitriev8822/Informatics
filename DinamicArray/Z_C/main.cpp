#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int x, y;
    cin >> n >> m;
    int **A = new int *[n];
    for(int i = 0; i < n; i++)
    {
        A[i] = new int[n];
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin >> A[i][j];
            if(A[i][j] == 0)
            {
                x = i;
                y = j;
            }
        }
    cout << x+1 << " " << y+1 << endl;
    return 0;
}
