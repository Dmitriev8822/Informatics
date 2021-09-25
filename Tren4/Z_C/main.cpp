#include <iostream>

using namespace std;

int buf[10001];

int main()
{
    int n;
    int m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    for(int i = 0; i < m; i++)
    {
        bool f = false;
        int x;
        cin >> x;
        for(int j = 0; j < n; j++)
        {
            if(buf[j] == x)
            {
                f = true;
                break;
            }
        }
        if(f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
