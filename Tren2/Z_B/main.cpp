#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string h;
    cin >> h;
    char n = h[0];
    cout << n << endl;
    int k;
    cin >> k;
    if(n == 'S' && (k - 1) % 2 == 0 || n == 'H' && k % 2 == 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;
}
