#include <iostream>

using namespace std;

int main()
{
    int N[10][10];

    int n;
    cin >> n;
    for(int y=0; y<n; y++)
        for(int x=0; x<n; x++)
            cin >> N[y][x];

    for(int y=0; y<n; y++)
    {
        int index = y + 1;
        if( index >= n)
            index = 0;
        int diff = N[y][0]-N[index][0];
        for(int x=1; x<n; x++)
        {
            int t = N[y][x]-N[index][x];
            if( t != diff)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    for(int x=0; x<n; x++)
    {
        int index = x + 1;
        if( index >= n)
            index = 0;
        int diff = N[0][x]-N[0][index];
        for(int y=1; y<n; y++)
        {
            int t = N[y][x]-N[y][index];
            if( t != diff)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if(n < 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
