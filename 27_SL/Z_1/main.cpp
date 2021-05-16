#include <iostream>
#include <cstring>

using namespace std;

char buf[20];
char* buf_end;

void addSymbol(char c)
{
    if(buf_end < &buf[18])
    {
        *buf_end++ = c;
        *buf_end = 0;
    }
    else
    {
        char *p1 = &buf[0];
        char *p2 = &buf[1];
        while(p2 < buf_end)
        {
            *p1 = *p2;
            p1++;
            p2++;
        }
        *p1 = c;
    }
}


int main()
{
    buf[0] = 0;
    buf_end = buf;

    bool res = false;
    while(1)
    {
        char c;
        cin >> noskipws;
        cin >> c;
        if(cin.eof())
            break;

        addSymbol(c);

        if(strstr(buf, "1543") != 0)
        {
            res = true;
            break;
        }
    }
    if(res)
        cout << "URA" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
