#include <iostream>

using namespace std;

int main()
{
    int a[1001], n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int mini, mini2;
    for(int i = 0; i < n-1; i++)
    {
        mini = a[i];
        mini2 = i;
        for(int j = i+1; j < n; j++)
            if(a[j] < mini)
            {
                mini = a[j];
                mini2 = j;
            }
        a[mini2] = a[i];
        a[i] = mini;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
