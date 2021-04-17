#include <iostream>
#include <algorithm>

using namespace std;

void printRow(int M[100][4], short row)
{
    cout << M[row][0] << " " << M[row][1] << " " << M[row][2] << endl; //" \t" << M[row][3] << endl;
}

void printMatrix(int M[100][4], short n)
{
    for(short row=0; row<n; row++)
        printRow(M,n - row - 1);
}

int main()
{
    int A[100][4];
    short n;
    cin >> n;

    for(short row = 0; row < n; row++)
        A[row][3] = 0;

    for(int rec = 0; rec < n; rec++)
    {
        short h,m,s;
        cin >> h >> m >> s;

        int sec = h*3600 + m*60 + s;
        for(short row = 0; row < n; row++)
        {
            if(A[row][3] >= sec)
                continue;
            int t;
            t = A[row][0];
            A[row][0] = h;
            h = t;

            t = A[row][1];
            A[row][1] = m;
            m = t;

            t = A[row][2];
            A[row][2] = s;
            s = t;

            t = A[row][3];
            A[row][3] = sec;
            sec = t;
        }
    }
    cout << endl;
    printMatrix(A, n);
    cout << endl;
    return 0;
}
