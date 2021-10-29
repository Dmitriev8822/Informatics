#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long res;
    //int cntres = -1;
    for(long long i = n; i > 0; i--)
    {
        long long k = i;
        //int cnt = 0;
        bool f = true;
        for(long long j = 2; j <= n; j++)
        {
            if(k % j == 0 && j != 2 && j != 3 && j != 5)
            {
                f = false;
                break;
            }
            while(k % j == 0)
            {
                //cnt++;
                k /= j;
            }
        }
        if(f)
        {
            res = i;
            //cntres = cnt;
            break;
        }
    }
    cout << res << endl;
    return 0;
}
