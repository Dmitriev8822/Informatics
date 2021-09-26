#include <iostream>

using namespace std;

int main()
{
    int n;
    int buf[100000];
    int i = 50000;
    int j = 50000;
    buf[50000] = -1;
    cin >> n;
    for(int e = 0; e < n; e++)
    {
        int x;
        cin >> x;
        if(x == 1 || x == 2)
        {
            int k;
            cin >> k;
            if(buf[50000] == -1)
            {
                buf[50000] = k;
            }
            else
            {
                if(x == 1)
                {
                    j--;
                    buf[j] = k;
                }
                if(x == 2)
                {
                    i++;
                    buf[i] = k;
                }
            }
        }
        else
        {
            if(x == 3)
            {
                cout << buf[j] << endl;
                j++;
            }
            if(x == 4)
            {
                cout << buf[i] << endl;
                i--;
            }
        }
    }
    return 0;
}
