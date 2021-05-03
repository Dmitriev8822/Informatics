#include <iostream>

using namespace std;

int main()
{
    int A[100][100];
    int ss=0, ss1=0, kpss=0, kpss1=0, d, kd;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(ss1 != 0 || ss != ss1)
        {
            cout << "NO" << endl;
            return 0;
        }
        ss1 = ss;
        ss = 0;

        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
            ss += A[i][j];
        }
        for(int j = 0; i < n; j++)
        {
            if(kpss1 != 0 || kpss != kpss1)
            {
                cout << "NO" << endl;
                return 0;
            }
            kpss1 = kpss;
            kpss = 0;
            for(int i = 0; i < n; i++)
                kpss += A[i][j];
        }
    }
    for(int i, j = 0; i < n;)
    {
        d += A[i][j];
        i++; j++;
    }
    int j = n-1;
    for(int i = 0; i < n;)
    {
        kd += A[i][j];
        i++; j--;
    }
    if(d != kd)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}
