#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int res1 = 0;
    int res2 = 0;
    while(n != 0)
    {
        if(n%5 == 0)
        {
            res1 = n/5;
            break;
        }
        n -= 3;
        res2++;
    }
    cout << res1 << " " << res2 << endl;
    return 0;
}
