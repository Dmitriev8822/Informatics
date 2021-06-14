#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int buf[1005];
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    int mini, mini2;
    for(int i = 0; i < n-1; i++)
    {
        mini = buf[i];
        mini2 = i;
        for(int j = i+1; j < n; j++)
            if(buf[j] < mini)
            {

                mini = buf[j];
                mini2 = j;

            }
            buf[mini2] = buf[i];
            buf[i] = mini;
    }
    for(int i = 0; i < n; i++)
        cout << buf[i] << " ";
    return 0;
}
