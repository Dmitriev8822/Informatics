#include <iostream>

using namespace std;

int main()
{
    char buf[257];
    cin.getline(buf, 256);
    char B[257];
    char *h = B;
         *h = 0;
    char *p = buf;
    while(*p != 0)
    {
        char c = *p;
        if( c == '{' ||c == '[' || c == '(')
        {
            *h = c;
             h++;
            *h = 0;

        }
        else if( c == '}' || c == ']' || c == ')')
        {
            char *r = h;
            r--;
            if(r < B)
            {
                h = 0;
                break;
            }
            char C = *r;
            if((C == '{' && c == '}') || (C == '[' && c == ']') || (C == '(' && c == ')'))
            {
                *r = 0;
                h  = r;
            }
            else
            {
                h = 0;
                break;
            }
        }
        p++;
    }
    if(h != B)
        cout << "false" << endl;
    else
        cout << "true" << endl;

    return 0;
}
