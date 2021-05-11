#include <iostream>

using namespace std;

int f(int a, int b)
{
    int c = 0;
    while (a >= b) {
    a -= b;
    c++;
    //cout << a << " " << b << " " << c << " || ";
    }
    //cout << endl;
    //cout << "p1" << endl;
    //cout << a << " " << b << " " << c << endl;
    return c;
}
int g(int a, int b)
{
    int c = 0;
    for (int i = 0; i < b; i++)
    c += a;
    //cout << "p2" << endl;
    //cout << a << " " << b << " " << c << endl;
    return c;
}
int k(int a, int b)
{
    return a-b;
}
int h(int a, int b)
{
    return a - g(f(a, b), b);
}
int main()
{
    while(1)
    {
        int a, b;
        cin >> a >> b;
        if(a == 0 && b == 0)
            return 0;

        cout << "H = " << h(a, b) << endl;
        cout << "K = " << k(a, b) << endl;
        //cout << "end";
        //cout << endl;
    }
}
