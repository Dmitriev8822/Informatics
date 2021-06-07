#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int buf[1005];
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    int cnt = 0;

    for(int i = 1; i < n; i++)
        for(int j = n-1; j >= i; j--)
            if(buf[j] < buf[j-1])
            {
                swap(buf[j], buf[j-1]);
                cnt++;
            }

    cout << cnt << endl;
    return 0;
}
