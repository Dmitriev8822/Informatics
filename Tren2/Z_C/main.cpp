#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n % 400)
    {
        cout << "12/09/" << n << endl;
        return 0;
    }
    if(n % 4 == 0 && n % 100 != 0)
    {
        cout << "12/09/" << n << endl;
        return 0;
    }

    cout << "13/09/" << n << endl;

    return 0;
}
