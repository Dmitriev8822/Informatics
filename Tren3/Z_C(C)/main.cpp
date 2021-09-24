#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int buf[100000];
    int n;
    int m;
    int x;
    cin >> n >> m >> x;
    string s;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        int p = 1;
        cin >> s;
        for(int j = 0; j < s.size(); j++)
        {
            sum += ((s[j] - '0') * p);
            p *= x;
        }
        sum %= m;
        buf[i] = sum;
    }

    sort(buf, buf + n);

    int k = 0;
    x = 0;
    for(int i = 0; i < n; i++)
    {
        int j = i;
        int z = i + 1;
        int sum = 0;
        while(z < n && buf[j] == buf[z]) sum++, z++;
        {
            if(sum > 0)
            {
                k += sum * (sum + 1) / 2;
                i = z;
            }
        }
    }
    cout << k << endl;
    return 0;
}
