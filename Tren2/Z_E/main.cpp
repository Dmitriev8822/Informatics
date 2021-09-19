#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

using namespace std;

int compare (const void * a, const void * b)
{
    return ( *(double*)a - *(double*)b );
}

int main()
{
    double A[100];
    int N;
    cin >> N;
    for(int j = 0; j < N; j++)
        cin >> A[j];

    while(N > 1)
    {
        qsort(A, N, sizeof(double), compare);
        int iLeft  = 0;
        int iRight = N-1;
        N = 0;
        while(1)
        {
            if(iLeft > iRight)
                break;

            double dSumm;
            if(iLeft == iRight)
                dSumm = A[iLeft];
            else
                dSumm = 2.0 * sqrt(A[iLeft] * A[iRight]);

            A[iLeft] = dSumm;
            iLeft  += 1;
            N = iLeft;
            iRight -= 1;
        }
    }
    cout << fixed << setprecision(2) << A[0] << endl;
    return 0;
}
