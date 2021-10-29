#include <iostream>

using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int sum = 0;
    cin >> a >> b >> c;
    while(1)
    {
        if(a > 0)
        {
            a--;
            sum++;
            if(b > 0)
            {
                b--;
                sum++;
            }
            else
                break;
        }
        else
            break;
    if(c>0)
    {
        c--;
        sum++;
        if(b > 0)
        {
            b--;
            sum++;
        }
        else
            break;
    }
    else
        break;
    }
    cout << sum << endl;
}
