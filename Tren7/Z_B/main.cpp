#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <sstream>
#include <iomanip>


using namespace std;

int main()
{
    double stk[5];
    int h = 0;
    char str[256];
    cin.getline(str,255);
    std::stringstream ss;
    ss << str;
    ss << " = ";

    while(1)
    {
        char s[20];
        ss >> s;
        if(strcmp(s, "+") == 0)
        {
            double b = stk[--h];
            double a = stk[--h];
            stk[h++] = a+b;
            continue;
        }
        if(strcmp(s, "-") == 0)
        {
            double b = stk[--h];
            double a = stk[--h];
            stk[h++] = a-b;
            continue;
        }
        if(strcmp(s, "*") == 0)
        {
            double b = stk[--h];
            double a = stk[--h];
            stk[h++] = a*b;
            continue;
        }
        if(strcmp(s, "/") == 0)
        {
            double b = stk[--h];
            double a = stk[--h];
            if(b != 0)
                stk[h++] = a/b;
            else
                return -1;
            continue;
        }
        if(strcmp(s, "=") == 0)
            break;

        double v = strtod(s, NULL);
        stk[h++] = v;
    }
    cout << fixed << setprecision(2) << stk[--h];
    return 0;
}
