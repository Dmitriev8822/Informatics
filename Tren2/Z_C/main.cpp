#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool v = false;
    if(n % 100)
        if(n % 400)
            v = true;

    else if(n % 4)
        v  = true;

    if(v)
        cout << "13/09/" << n << endl;
    else
        cout << "12/09/" << n << endl;
    return 0;
}
