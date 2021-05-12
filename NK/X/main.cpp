#include <iostream>

using namespace std;

int main()
{
    long long a[26] = {0};
    char c;
    char Cnt[10];
    while(toupper(c)){
    cin >> c;
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            int i = c - 65;
            if( i > 25)
                i = i - 32;
            int t = Cnt[i];
            Cnt[i] = ++t;
        }

    for(int j=0; j < 26; j++)
    {
        char c = static_cast<char>(j+65);
        cout << c << " - " << Cnt[j] << endl;
    }
    }
    return 0;
}
