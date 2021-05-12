#include <iostream>

using namespace std;

int main()
{
    int Cnt[26];
    for(int j=0; j < 26; j++)
        Cnt[j] = 0;

    int c = 0;
    while(c != '\n')
    {
        c = cin.get();
        if(c < 0)
            break;

        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            int i = c - 65;
            if( i > 25)
                i = i - 32;
            int t = Cnt[i];
            Cnt[i] = ++t;
        }
    }

    for(int j=0; j < 26; j++)
    {
        char c = static_cast<char>(j+65);
        cout << c << " \u2013 " << Cnt[j] << endl;
    }
    return 0;
}
