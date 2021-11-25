#include <iostream>
#include <cmath>

using namespace std;

int funk1(int n)
{
    int cnt2 = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cnt2++;
    }
    return cnt2;
}

int funk(int n)
{
    int cnt1 = 0;
    int nq = sqrt(n);
    for(int i = 2; i < nq; i++)
    {
        if(n % i == 0)
            cnt1++;
    }
    cnt1 *= 2;
    cnt1 += 2;
    return cnt1;
}

int main()
{
    int n = 1;
    while(n != 0)
    {
        cin >> n;
        cout << "koren = " << funk(n) << " perebor = " << funk1(n) << endl;
    }
    return 0;
}
