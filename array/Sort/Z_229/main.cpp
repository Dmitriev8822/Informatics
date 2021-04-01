#include <iostream>

using namespace std;

int main()
{
    int a[1001], n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];


    int isaver, maxi = a[0];

    for(int i = 0; i < n; i++)
        if(a[i] > maxi)
        {
            maxi = a[i];
            isaver = i;
        }

    swap(a[0], a[isaver]);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
