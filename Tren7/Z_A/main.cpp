#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double in;
    double out;
    int pr;
    cin >> in >> out >> pr;
    double need = 0;
    double k = pr/100.0;
    for(int i = 0; i < 10; i++)
    {

        need += out;
        out = out + out * k;
    }
    in *= 10;
    double res = need - in;
    cout << fixed << setprecision(2) << res << endl;
    return 0;
}
