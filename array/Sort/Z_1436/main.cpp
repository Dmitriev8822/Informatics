#include <iostream>

using namespace std;

int main()
{
    int a[1001], b[1001], n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int mini, mini2, mini1;
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
        while(1)
            for(int i = 0; i < n; i++)
                if(a[i] == b[i]
        for(int i = 0; i < n; i++)
        {
            a[i]
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
