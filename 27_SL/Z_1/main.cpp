#include <iostream>
#include <cstring>

using namespace std;

// сдвиг строки на однин символ влево
void oneShiftLeft(char *dest)
{
    char *src;
    src = dest;
    src++;
    while(*dest != 0)
    {
        *dest++ = *src++;
    }
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

        if(strstr(buf, "1543") != nullptr)
        {
            res = true;;
            break;
        }
        oneShiftLeft(buf);

        int c = cin.peek();
        if( c == '\n')
            continue;

        c = cin.get();

        strncat(buf, reinterpret_cast<char*>(&c), 1);
    }
    if(res)
        cout << "URA" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
