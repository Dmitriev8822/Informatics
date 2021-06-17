#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for(int i = 1; i < n; i *= 2)
        cnt++;

    for(int i = 1; i < m; i *= 2)
        cnt++;

    cout << cnt;
    return 0;
}
