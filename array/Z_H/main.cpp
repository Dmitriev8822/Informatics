#include <iostream>

using namespace std;

int main()
{
    int n, a[35];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int j = a[1];
    for(int i = 0; i < n; i++)
    {
        cout << j << " " << a[i] << " ";
        j = a[i++];
    }
    cout << endl;
    return 0;
}
