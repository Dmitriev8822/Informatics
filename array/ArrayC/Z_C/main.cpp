#include <iostream>

using namespace std;

int main()
{
    int j, n, a[101];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int all, res = 0;
    for(int i = 0; i < n; i++)
    {
        j = a[i];
        for(int k = 0; k < n; i++)
        {
            {
                if(j == a[k])
                    res++;
            }
            res--;
            all += res;
        }
    }
    return 0;
}
