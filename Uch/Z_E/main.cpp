#include <iostream>
#include <cstring>

using namespace std;

char M[10][8];
int n;

int main()
{
    cin >> n;
    cin.ignore();
    char buffer[12];
    for(int y=0; y<n; y++)
    {
        cin.getline(buffer, 9);
        int i = strlen(buffer) -1;
        for(int x=7; x>0; x--)
        {
            if(i < 0)
                M[y][x] = 0;
            else
                M[y][x]= buffer[i--];
        }
    }
    for(int y=0; y<n; y++)
    {
        for(int x=0; x<8; x++)
        {
            if(M[y][x] < 'A')
                M[y][x] = 0;
        }
    }

    for(int j=9; j>=0; j--)
    {
        char c = 0;
        for(int x=0; x<9; x++)
        {
            for(int y=0; y<n; y++)
            {
                char t = M[y][x];
                if(t >= 'A' && t <= 'Z')
                {
                    if(c == 0)
                    {
                        c = t;
                        M[y][x] = j;

                    }
                    else if(t == c)
                        M[y][x] = j;
                }
            }
        }
    }

    int summ = 0;
    for(int x=0; x<8; x++)
    {
        int column = 0;
        for(int y=0; y<n; y++)
        {
            char t = M[y][x];
            column += t;
        }
        summ = summ * 10 + column;
    }

    cout << summ << endl;

    return 0;
}
