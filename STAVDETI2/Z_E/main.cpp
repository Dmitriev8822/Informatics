#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    int t;
    cin >> t;
    int buf[1001];
    for(int i = 0; i < t; i++)
    {
        cin >> n >> m;
        buf[i] = n*60+m;
    }

    sort(buf, buf+t);

    for(int i = 0; i < t; i++)
        cout << buf[i]/60 << " " << buf[i]%60<< endl;
    return 0;
}
