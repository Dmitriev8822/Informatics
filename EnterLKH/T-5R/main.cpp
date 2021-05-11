#include <iostream>
using namespace std;

int h(int a, int b)
{
    return a - a/b*b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << h(a,b) << endl;
    return 0;
}
