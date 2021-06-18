#include <iostream>
#include <algorithm>

void moveLeft(int* p, int n)
{
}

using namespace std;

int main()
{
    int buf[101];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    int buff[101];
    for(int i = 0 ; i < n; i++)
    {
        int t = buf[n-1];
        if(buf[i] > t)
            buff[i] = buf[i];
        else
            buff[i] = 32001;
    }
    sort(buff, buff+n);
    for(int i = 0; i < n; i++)
    {
        int t = buf[n-1];
        if(buf[i] == t)
            if()
    }
    for(int i = 0; i < n; i++)
        cout << buf[i] << " ";
    return 0;
}
