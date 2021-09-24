#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;
    int res1 = 0;
    int res2 = 0;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            int sum = 0;
            int per1 = j;
            int per2 = i;
            for(int i = 3; i < n; i++)
            {
                sum += per1 + per2;
                per1 = per2;
                per2 = sum;
            }
                if(sum == m)
                {
                    res1 = i;
                    res2 = j;
                }
        }
    }
    cout << res1 << " " << res2 << endl;
    return 0;
}
