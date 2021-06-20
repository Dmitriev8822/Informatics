#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i = max(max(a,b), max(b,c));
    while(i % a != 0 && i % b && i % c != 0)
    {
        i++;
    }
    cout << i << endl;
    return 0;
}
