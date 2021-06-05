#include <iostream>

using namespace std;

int powerNumber(int v)
{
    int res = 1;
    while(v != 0)
    {
        int n = v%10;
        res = res * n;
        v = v/10;
    }
    return res;
}

int main()
{
    int n;
    int k;
    int A[] = {622,99,48,58,61,46,99,94,23,35,94,7,12};
    n = sizeof(A)/sizeof(int);
    k = 26;

    int mind = 10000;
    int res = 0;
    for(int j = 0; j < n; j++)
    {
        int v = A[j];
        int d = abs(powerNumber(v) - k);
        if(mind > d)
        {
            mind = d;
            res = v;
        }
        printf("[%2d] %2d %2d\n", j, A[j], d);
    }
    cout << res << endl;
    return 0;
}
