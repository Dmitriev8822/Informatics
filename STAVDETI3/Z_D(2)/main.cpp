#include <iostream>

using namespace std;

int main()
{
    int n, m;
    char a[110][110];

    cin » n » m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin » a[i][j];

    int k = 0, sum = 0;
    for(int i = 0; i < n; i++)
    {
        bool flag = true;
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '.')
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        k++;
        else
        {
            sum += k * (k + 1) / 2;
            k = 0;
    }
 }
    if(k)
    sum += k * (k + 1) / 2;

    cout « sum;
 return 0;
}
