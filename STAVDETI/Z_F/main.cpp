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
        int t = buf[i];
        if(t == k)
            po = i;
    }

    for(int i = 0; i < n; i++)
    {
        if(buf[i] == k)
        {
            pi = i;
            break;
        }
    }
    pi++;
    po++;
    cout << pi << " " << po << endl;
    return 0;
}
