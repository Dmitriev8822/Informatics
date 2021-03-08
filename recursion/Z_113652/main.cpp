#include <iostream>

using namespace std;

int sumn(int n)
{
    int sum = 0;
    while (n!=0)
    {
        sum += n%10;
        n /= 10;
    }
    return 0;
}
int prov(int n)
{
    if(n%5 == 0 && sumn(n)%3 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    //n += 1;
    if(prov(n) == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
