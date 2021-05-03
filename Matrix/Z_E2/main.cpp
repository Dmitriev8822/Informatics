#include <iostream>

using namespace std;

bool chstring(int A[100][100], int n, int tst)
{
    for(int i = 1; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
            sum += A[i][j];

        if(sum != tst)
            return false;
    }
    return true;
}

bool chcolumn(int A[100][100], int n, int tst)
{
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
            sum += A[j][i];

        if(sum != tst)
            return false;
    }
    return true;
}

bool chdiagonal(int A[100][100], int n, int tst)
{
    int sum = 0;
    for(int j=0; j<n; j++)
        sum += A[j][j];
    if(sum != tst)
        return false;

    sum = 0;
    for(int j=0; j<n; j++)
        sum += A[n-j-1][j];

    if(sum != tst)
        return false;

    return true;
}

int main()
{
    int A[100][100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];

    int tst = 0;
    for(int j = 0; j < n; j++)
        tst += A[j][0];

    if(chstring(A,n,tst) && chcolumn(A,n,tst) && chdiagonal(A,n,tst))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
