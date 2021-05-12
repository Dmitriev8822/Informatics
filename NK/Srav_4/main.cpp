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

char MM(cha
{
    char str[82];
    cin.getline(str, 80);
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

string MR(string a)
{
    int ch = 0;
    int k = 1;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
            ch = ch*10 + (a[i] - '0');

        else if(a[i] >= 65 && a[i] <= 90 && ch == 0)
        {
            if(k == 40)
            {
                cout << a[i] << endl;
                k = 0;
            }
            else
                cout << a[i];
            k++;
        }

        else
        {
            while(ch)
            {
                if(k == 40)
                {
                    cout << a[i] << endl;
                    k = 0;
                }
                else
                    cout << a[i];
                ch--;
                k++;
            }
            ch = 0;
        }
    }
    return 0;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
