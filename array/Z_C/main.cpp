#include <iostream>

using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int res = 0;
    int per;
    for(int i = 0; i < n; i++)
    {
        per = a[i];
        for(int j = 0; j < n; j++)
        {
            if(j == per)
                res++;
        }
    }
    cout << res << endl;
    return 0;
}
