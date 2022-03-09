#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    int repb = b;
    b /= 2;
    int mini = min(min(a, b), min(b, c));
    if(mini == a)
        cout << mini * 4 << endl;
    else if(mini * 2 == repb)
        cout << mini * 4 + 1 << endl;
    else if(mini == c)
        cout << mini * 4 + 2 << endl;
    else
        cout << mini * 4 + 3 << endl;
    return 0;
}
