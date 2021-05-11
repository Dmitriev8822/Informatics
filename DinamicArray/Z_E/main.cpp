#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int **A = new int *[n];
    for(int i = 0; i < n; i++)
        A[i] = new int [n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        cin >> A[i][j];

    int t1 = 0;
    int t2 = 0;
    int t3 = 0;
    int t4 = 0;

    for(int i = 0; i < n; i++)
    {
        int d1 = i;
        int d2 = n-i-1;
        for(int j = 0; j < n; j++)
        {
            if(j < d1 && j < d2)
                t1 += A[i][j];
            else if(j > d1 && j < d2)
                t2 += A[i][j];
            else if(j > d1 && j > d2)
                t3 += A[i][j];
            else if(j < d1 && j > d2)
                t4 += A[i][j];
        }
    }
    cout << t1 << " " << t3 << " " << t2 << " " << t4 << endl;

    for(int i = 0; i < n; i++) delete []A[i];
    delete []A;
    return 0;
}
