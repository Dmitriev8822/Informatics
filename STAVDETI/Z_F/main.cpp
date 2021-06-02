#include <iostream>

using namespace std;

int main()
{
    int k, n;
    cin >> n >> k;
    int buf[200];
    int pi = -2;
    int po = -2;
    for(int i = 0; i < n; i++)
    {
        if(buf[i] == k)
        {
            if(pi == -2)
            {
                pi = i;
                po = i;
            }
            else
                po = i;
        }
    }
    pi++;
    po++;
    cout << pi << " " << po << endl;
    return 0;
}
