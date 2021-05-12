#include <iostream>

using namespace std;

char* findNumber(char *p, int *res)
{
    int n = *res;
    while(1)
    {
        char c = *p;
        if(c == 0 || c < '0' || c > '9')
        {
            *res = n;
            return p;
        }
        p++;
        n = n * 10 + c - '0';
     }
}

void outsymbol(char c)
{
    static int nd = 0;
    if(nd == 0 && c == '\n')
        return;

    cout << c;
    nd++;
    if(nd > 39)
    {
       nd = 0;
       cout << endl;
    }
}

int main()
{
    char str[82];
    cin.getline(str, 81);
    cout << str << endl;
    char *p = &str[0];
    while(*p != 0)
    {
        int n = 0;
        p = findNumber(p, &n);
        char h = *p++;
        outsymbol(h);
        for(int i = 1; i < n; i++)
            outsymbol(h);
    }
    outsymbol('\n');

    return 0;
}
