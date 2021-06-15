#include <iostream>

using namespace std;

int getBends(int cell)
{
    if(cell < 2)
        return 0;

    int acc = 1 + cell % 2;
    return acc + getBends(cell / 2);
}

int main()
{
    int n;
    int m;
    cin >> n >> m;

    cout << getBends(n) + getBends(m) << endl;

    return 0;
}
