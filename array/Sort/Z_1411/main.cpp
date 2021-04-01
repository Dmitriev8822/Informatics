#include <iostream>

using namespace std;

int main()
{
    int n, a[1001], sch;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 1; i < n; i++)
        for(int j = n-1; j >= i; j--)
            if(a[j] < a[j-1])
            {
                swap(a[j], a[j-1]);
                sch++;
            }

    cout << sch << endl;
    return 0;
}
