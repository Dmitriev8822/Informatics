#include <iostream>

using namespace std;

int buf[100001];

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> buf[i];
    }
    int i = 2;
    while(i < n)
    {
        if(buf[i] == buf[i-1] && buf[i] == buf[i-2])
        {
            cnt++;
            i += 3;
        }
        else
            i++;
    }
    cout << cnt << endl;
    return 0;
}
