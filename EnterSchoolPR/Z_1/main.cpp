#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int buf[101];
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    int a;
    cin >> a;
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(buf[i] < a && buf[i] > 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
