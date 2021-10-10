#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    double m;
    cin >> n >> m;
    double res = pow(2, n*m) - pow(2, m*(n  - 1)) - pow(2, n*(m - 1)) + pow(2, (m - 1) * (n - 1));
    cout << fixed << setprecision(0) << res << endl;
    return 0;
}
