#include <iostream>

using namespace std;


int main()
{
    char n;
    int f = 0;
    n = cin.get();
    while(n != '\n')
    {
        if(f != 0)
            cout << "*" << n;
        else
        {
            cout << n;
            f = 1;
        }
        n = cin.get();
    }
    cout << endl;
    return 0;
}
