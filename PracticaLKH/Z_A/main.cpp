#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int c;
    int i = 0;
    cin >> a >> b;
    c = max(a,b);
    while(c/10 != 0)
    {
        c /= 10;
        i++;
    }
    cout << i << endl;
    return 0;
}
