#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    k *= 2;
    int ke1 = 1, ke2 = 1;
    for(int i = 0; i < k; i += 2)
    {
        int x, y;
        cin >> x >> y;
        sum += abs(x - ke1) + abs(y - ke2);
        ke1 = x;
        ke2 = y;
    }
    cout << sum << endl;
    return 0;
}
