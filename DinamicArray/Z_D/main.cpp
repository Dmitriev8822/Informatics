#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int mini = 2147483647;
    cin >> n >> m;

    int **A = new int *[n];
    for(int i = 0; i < n; i++)
        A[i] = new int[n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
            if(A[i][j] < mini)
                mini = A[i][j];
        }
    cout << mini << endl;
    return 0;
}
