#include <iostream>

using namespace std;

char outChar()
{
    char ch = cin.get();
    if( cin.peek() == '\n')
        return ch;

    char res = outChar();
    if(res == ch)
        cout << '\b';
    else
        cout << res;
    return ch;
}

int main()
{
    cout << outChar() << endl;
    return 0;
}
