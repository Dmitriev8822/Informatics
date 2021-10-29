#include <iostream>
#include <algorithm>

using namespace std;

const int K = 100007;
int a[K];

int main()
{
     int n;
     cin >> n;
     for(int i = 0; i < n; i++)
        cin >> a[i];
     sort(a, a + n);
     if(a[0] < 0)
     {
         if(a[n - 1] < 0)
            cout << a[n - 1] * a[n - 2] << '\n';
         else
            cout << a[0] * a[n - 1] << '\n';
         return 0;
     }
     if(a[0] == 0)
     {
        cout << "0\n";
        return 0;
     }
     else
     cout << a[0] * a[1] << '\n';
     return 0;
}
