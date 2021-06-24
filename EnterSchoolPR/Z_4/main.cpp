#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while(a <= b)
    {
        for(int j = 1; j <= a; j++)
            cout << j << " ";

        a++;
        cout << endl;
    }
    return 0;
}
