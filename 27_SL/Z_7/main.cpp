#include <iostream>
#include <cstring>

using namespace std;

char flipper(char buf[256])
{
}

int main()
{
    char* buf = new char[255*1000];
    int i = 0;
    while(1)
    {
        cin >> noskipws;
        cin >> buf[i]; i++;
        if(cin.eof())
            break;
    }

    flipper(buf);
    delete buf;
    return 0;
}
