#include <iostream>

using namespace std;

void dop(int f)
{
    char n;
    n = cin.get();
    if(n == '\n')
    {
        cout << endl;
        return;
    }

    if(f == 0)
        cout << n;
    else
        cout << "*" << n;
    dop(1);
}

int main()
{
    int f = 0;
    dop(f);
    return 0;
}
