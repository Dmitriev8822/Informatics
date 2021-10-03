#include <iostream>

using namespace std;

int comp(int n)
{
    int buf[101];
    int num = 0;
    for(int i = 0; i <= 101; i++)
        buf[i] = -1;

    int i = 100;
    while(n != 0)
    {
        buf[i] = n % 3;
        n /= 3;
        i--;
    }
    while(i != 101)
    {
        num += buf[i];
        num *= 10;
        i++;
    }
    return num;
}

int main()
{
    int n;
    cin >> n;
    cout << comp(n) << endl;
    return 0;
}
