#include <iostream>

using namespace std;

unsigned char M[101];
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
    cin >> M;
    int j=0;
    for(; j<101; j++)
    {
        unsigned char c = M[j];
        if(c == 0)
            break;
        M[j] = c - '0';
    }
    me = j;
    bool f = false;
    for(j=0; j < me; j++)
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
    }
    for(int j=0; j < me; j++)
    {
        int t = M[j];
        cout << t;
    }
    cout << endl;
    return 0;
}
