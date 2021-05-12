#include <iostream>
#
using namespace std;

void printASCII()
{
    int index = 0;
    for(int j=0; j<32; j++)
    {
        for(int i=0; i<8; i++)
        {
            char c = index;
            cout << index++ << " " << c << "   ";
        }
        cout << endl;
    }
}

int main()
{
    int Cnt[26];
    for(int j=0; j < 26; j++)
        Cnt[j] = 0;

    char c = 0;
    while(c != '\n')
    {
        cin.get(c);
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
        char c = j+65;
        cout << c << " - " << Cnt[j] << endl;
    }
    return 0;
}
