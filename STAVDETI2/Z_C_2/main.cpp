#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int buf[1001];
    for (int i = 0; i < n; i++)
        cin >> buf[i];

    int ii = 0;
    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        int min = buf[i];
        int n_min = i;
        for (int j = i+1; j < n; j++)
        {
            if (buf[j] < min)
            {
                min = buf[j];
                n_min = j;
            }
        }
        if (i != n_min)
        {
            buf[n_min] = buf[i];
            buf[i] = min;
            if (i == ii)
            {
                ii = n_min;
                cnt++;
            }
        else if (n_min == ii)
        {
            ii = i;
            cnt++;
        }
        }

     }

     cout << cnt << endl;

 return 0;
}
