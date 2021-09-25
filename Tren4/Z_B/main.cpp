#include <iostream>

using namespace std;

int main()
{
    int n;
    int rbuf[10001];
    int i = -1;
    int lbuf[10001];
    int j = -1;
    cin >> n;
    for(int e = 0; e < n; e++)
    {
        int x;
        cin >> x;
        if(x == 1 || x == 2)
        {
            int k;
            cin >> k;
            if(x == 1)
            {
                j++;
                lbuf[j] = k;
            }
            if(x == 2)
            {
                i++;
                rbuf[i] = k;
            }
        }
        else
        {
            if(x == 3)
            {
                cout << lbuf[j] << endl;
                j--;
            }
            if(x == 4)
            {
                cout << rbuf[i] << endl;
                i--;
            }
        }
    }
    return 0;
}
