#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int buf[201];
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    int k;
    cin >> k;
    int c = 0;
    for(int i = n-1; i >= 0; i--)
    {
        if (k <= buf[i])
        {
            c = ++i;
            break;
        }
    }
    c++;
    cout << c << endl;
    return 0;
}
