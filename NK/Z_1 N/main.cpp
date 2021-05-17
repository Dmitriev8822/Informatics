#include <iostream>
#include <cstring>

using namespace std;

void oneShiftLeft(char *dest , char c)
{
    char *src;
    src = dest;
    src++;
    while(*dest != '\0')
    {
        *dest++ = *src++;
    }
    *dest = c;
}

int main()
{
    char buf[20];
    cin.get(buf,18);
    bool res = false;
    while(1)
    {
        if(strlen(buf) <= 4)
            break;

        if(strstr(buf, "1543") != 0)
        {
            res = true;
            break;
        }

        char c;
        cin >> c;
        if( c == EOF)
            break;
        oneShiftLeft(buf,c);
    }
    if(res)
        cout << "URA" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
