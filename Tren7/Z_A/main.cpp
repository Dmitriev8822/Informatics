#include <iostream>

using namespace std;

int main()
{
    double in;
    double out;
    int pr;
    cin >> in >> out >> pr;
    double need = 0;
    for(int i = 0; i < 10; i++)
    {
        need += out + out * pr;
        out += out * (out / 100 * pr);
        cout << out << endl;
    }
    in *= 10;
    double res;
    cout << "in = " << in << " out = " << out << endl;
    res = need - in;
    if(res <= 0)
        cout << 0.00 << endl;
    else
        cout << res << endl;
    return 0;
}
