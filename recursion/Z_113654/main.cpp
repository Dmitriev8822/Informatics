#include <iostream>

using namespace std;

int ch(int i)
{
    char n;
    n = cin.get();
    if(n == '\n')
        return i;

    if(n > 47 && n < 58)
        i++;

    return ch(i);
}

int main()
{
    cout << ch(0) << endl;
    return 0;
}
