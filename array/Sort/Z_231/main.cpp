#include <iostream>

using namespace std;

int main()
{
    int n, a[1001], vsp1, vsp2;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> vsp1 >> vsp2;
    for(int i = n-1; vsp2-1 <= i; i--)
        a[i+1] = a[i];
    a[vsp2-1] = vsp1;
    for(int i = 0; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}
