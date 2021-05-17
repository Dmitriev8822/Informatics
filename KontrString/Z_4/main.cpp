#include <iostream>
#include <cstring>

using namespace std;


char* skipDelimiters(char *p)
{
    while(*p == ' ')
        p++;

    return p;
}

char* getTaiOflWord(char *p)
{
    while((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
        p++;

    return p;
}


int main ()
{
    char str[] ="   This a sample   string  ";
    int cap = 0;
    char *p = str;
    while(1)
    {
        p = skipDelimiters(p);
        if(*p == 0)
            break;
        p = getTaiOflWord(p);
        if(*p == 0)
            break;
        cap++;
    }

    cout << cap << endl;

    return 0;
}
