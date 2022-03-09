#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int city_2 = a;
    int city_3 = city_2 * b;
    int city_4 = city_2 * c;
    int city_5 = city_3 * d + city_4 * e;
    cout << city_5 << endl;
    return 0;
}
