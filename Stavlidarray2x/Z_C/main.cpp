#include <iostream>

using namespace std;

bool testSymmetry(short N[100][100], short n)
{
    for(short c=0; c<n; c++)
    {
        for(short r=c+1; r<n; r++)
        {
            //cout << N[c][r] << " ? " << N[r][c] << endl;
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

    if(testSymmetry(M, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
