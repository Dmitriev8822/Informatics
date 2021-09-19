#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%100 == 0)
    {
        if(n%400 == 0)
            cout << "13/09/";
        else
            cout << "12/09/";
    }
    else
    {
        if(n % 4 == 0)
            cout << "13/09/";
        else
            cout << "12/09/";
    }
    cout.width(4);
    cout.fill('0');
    cout << n << endl;

    return 0;
}
