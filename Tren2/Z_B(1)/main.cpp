#include <iostream>

using namespace std;

int main()
{
    char n;
    cin >> n;
    int k;
    cin >> k;
    while(1)
    {
        if(k == 0)
            break;
        k--;
        if(n == 'H')
            n = 'S';
        else
            n = 'H';

    }
    if(n == 'H')
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
