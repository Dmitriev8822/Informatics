#include <iostream>

using namespace std;

int main()
{
    int n, a[1001], j;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    for (int i = 1; i < n; i++)
    {
        x = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }

        for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
