#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

bool compare(double a, double b)
{
    if(a > b)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    double buf[10000];
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    int j = n - 2;
    while(j >= 0)
    {
        sort(buf, buf+n);
        buf[j] = sqrt(buf[j]*buf[j+1])*2;
        j--;
        n--;
    }

    cout << fixed << setprecision(2) << buf[0] << endl;
    return 0;
}
