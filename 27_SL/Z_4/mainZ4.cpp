#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    char *buffer;
    cin >> N;

    buffer = new char[N+1];
    cin.ignore();
    cin.getline(buffer, N + 1);

    char *sLeft  = new char[N/2 + 1];
    char *pl = sLeft;
         *pl = 0;
    char Center = 0;
    for(char j = 'A'; j<= 'Z'; j++)
    {
        while(1)
        {
            char *p = strchr(buffer, j);
            if( p == 0)   // указанная в j буква не найдена.
                break;
            else
            {
                *p = ' ';
                p = strchr(p, j);
                if( p != 0)
                {   // найдена парная буква
                    *p = ' ';
                    *pl++ = j;
                    *pl   = 0;
                }
                else //парная буква не найдена.
                {
                    // если эта буква первая не парная, то пусть стоит в центре
                    if(Center == 0)
                        Center = j;
                    // остальные непарные буквы пропускаем.
                }
            }
        }
    }

    char *pb = buffer;
          pl = sLeft;

    while(*pl != 0)
        *pb++ = *pl++;

    if(Center != 0)
        *pb++ = Center;

    pl--;
    while(pl >= sLeft)
        *pb++ = *pl--;

    *pb++ = '\n';
    *pb = 0;
    puts(buffer);

    delete sLeft;
    delete buffer;

    return 0;
}
