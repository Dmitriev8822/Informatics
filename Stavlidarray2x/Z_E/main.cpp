#include <iostream>

using namespace std;

int main()
{
    int A[100][100];
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            A[i][j] = A[i][j] + t;
        }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            if(j == n-1)
                cout << A[i][j];
            else
                cout << A[i][j] << " ";
        cout << endl;
    }
    return 0;
}
