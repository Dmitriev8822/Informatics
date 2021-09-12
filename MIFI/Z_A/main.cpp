#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    float n = a / b;
    cout << fixed << setprecision(6) << n;
    return 0;
}
