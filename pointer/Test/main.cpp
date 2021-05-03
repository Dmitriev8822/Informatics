#include <iostream>

using namespace std;

int main()
{
    int n=1;
    while(n != 0)
    {
        cin >> n;
        int *p;
        p = &n;
        cout << p << endl;
    }
    return 0;
}
