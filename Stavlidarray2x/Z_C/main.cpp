#include <iostream>

using namespace std;

void printMatrix(short N[100][100], short n)
{
    for(short c=0; c<n; c++)
    {
        for(short r=0; r<n; r++)
            cout << N[c][r] << " ";
        cout << endl;
    }
    cout << endl;
}

bool testSymmetry(short N[100][100], short n)
{
    for(short c=1; c<n; c++)
    {
        for(short r=c; r<n; r++)
        {
            if(N[c][r] != N[r][c])
                return false;
        }
    }
    return true;
}

int main()
{
    short M[100][100];
    short n;
    cin >> n;
    for(short c=0; c<n; c++)
        for(short r=0; r<n; r++)
            cin >> M[c][r];
        cout << endl;

    printMatrix(M, n);

    if(testSymmetry(M, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
