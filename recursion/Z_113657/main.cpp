#include <iostream>
#include <ctype.h>

using namespace std;

void getMirrorString()
{
    char c = cin.get();
    if( c == '\n')
        return;

    bool ch = isalpha(c);
    bool ss = false;
    if(c == '(' || c == ')')
        ss = true;

    if(ch || ss)
        cout << c;
    getMirrorString();
    if(ch)
        cout << c;
    else if(ss)
        cout << ')';
}

int main()
{
    getMirrorString();
    cout << endl;
    return 0;
}
