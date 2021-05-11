#include <iostream>

using namespace std;

char* ignoreSpace(char *p)
{
    while(1)
    {
        char c = *p;
        if(c == 0 || c != ' ')
            return p;
        p++;
    }
}

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


int main()
{
    char str[202];
    cin.getline(str,200);
    int A = 0;
    int B = 0;
    char action;
    char *p;
    p = ignoreSpace(&str[0]);
    p = findNumber(p, &A);
    p = ignoreSpace(p);
    action = *p++;
    p = ignoreSpace(p);
    p = findNumber(p, &B);
    int res;
         if( action == '+') res = A + B;
    else if( action == '-') res = A - B;
    else if( action == '*') res = A * B;
    else res = 0;

    cout << res << endl;

    return 0;
}
