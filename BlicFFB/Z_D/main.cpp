#include <iostream>

using namespace std;

unsigned char M[100];
unsigned char me;

bool test_div3()
{
    int summ = 0;
    for(int j=0; j<=me; j++)
        summ += M[j];
    if(summ%3 == 0)
        return true;
    return false;
}

int main()
{
    int v;
    cin >> v;
    int j=0;
    for(; j<100; j++)
    {
        M[j] = v%10;
        v /= 10;
        if(v == 0)
            break;
    }
    me = j;
    bool f = false;
    while(j >= 0)
    {
        int t = M[j];
        for(int a = 9; a > t; a--)
        {
            M[j] = a;
            if(test_div3())
            {
                f = true;
                break;
            }
        }
        if(f)
            break;
        M[j] = t;
        j--;
    }
    v = 0;
    for(int j = me; j >= 0; j--)
    {
        v = v*10 + M[j];
    }
    cout << v << endl;
    return 0;
}
