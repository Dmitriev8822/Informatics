#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sums = 0;
    int sumt = 0;
    int maxi1 = -1, maxi2 = 100001;
    int res;

    int buf[101][101];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> buf[i][j];
            sums += buf[i][j];
        }
        if(sums > maxi1)
            maxi1 = sums;

        sums = 0;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sumt += buf[j][i];
        }
        if(sumt < maxi2)
            maxi2 = sumt;

        sumt = 0;
    }
    res = buf[maxi1][maxi2];
    cout << res;
    return 0;
}
