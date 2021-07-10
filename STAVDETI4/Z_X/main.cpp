#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
    return a < b;
}

int main()
{
    int n;
    cin >> n;
    int buf[100];
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    sort(buf, buf+n, cmp);

    for(int i = 0; i < n; i++)
        cout << buf[i] << " ";
    return 0;
}
