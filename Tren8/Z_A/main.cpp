#include <iostream>
#include <algorithm>

using namespace std;

int buf[100000];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    sort(buf, buf + n);
    int res = buf[0];
    for(int i=1;i<n;i++)
    {
        if(buf[i] > buf[i-1])
            res += buf[i];
    }
    cout << res << endl;
}
