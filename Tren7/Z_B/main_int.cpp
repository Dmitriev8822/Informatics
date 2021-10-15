#include <iostream>
#include <fstream>

using namespace std;

int stk[5];

int main()
{
    int h = 0;
    int v = 0;
    int f = 0;
    char str[256];
    cin.get(str,256);

    for(int j=0; j<256; j ++)
    {
        char c = str[j];
        if( c == 0)
            break;

        if( c >= '0' &&c <= '9')
        {
            int t = c - 0x30;
            v = v * 10 + t;
            f++;
            continue;
        }
        if(f > 0)
        {
            stk[h++] = v;
            v = 0;
            f = 0;
            continue;
        }
        if(c == ' ')
            continue;

        if( c == '+')
        {
            int a = stk[--h];
            int b = stk[--h];
            stk[h++] = a+b;
        }
        else if(c == '-')
        {
            int a = stk[--h];
            int b = stk[--h];
            stk[h++] = a-b;
        }
        else if(c == '*')
        {
            int a = stk[--h];
            int b = stk[--h];
            stk[h++] = a*b;
        }
        else if(c == '/')
        {
            int a = stk[--h];
            int b = stk[--h];
            if(b != 0)
                stk[h++] = a/b;
            else
                return -1;
        }
        else
            break;
    }
    cout << stk[--h];
    return 0;
}
