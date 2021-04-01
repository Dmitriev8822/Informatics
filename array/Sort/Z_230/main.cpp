#include <iostream>

using namespace std;

int main()
{
    int a[1001], n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int maxi, maxi2;
    for(int i = 0; i < n-1; i++)
    {
        maxi = a[i];
        maxi2 = i;
        for(int j = i+1; j < n; j++)
            if(a[j] < maxi)
            {
                maxi = a[j];
                maxi2 = j;
            }
        a[maxi2] = a[i];
        a[i] = maxi;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
