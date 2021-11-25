#include <iostream>
#include <cstring>

using namespace std;

const int K = 101;
char a[K];

int main()
{
    cin >> a;
    int s = strlen(a);
    int chet = 0;
    for(int i = 0; i < s; i++)
    {
        int k = a[i] - 48;
        chet += k;
    }
    bool boolka = false;
    if(!(chet % 3))
    {
        for(int i = 0; i < s; i++)
        {
            if((a[i] - 48) + 9 <= 9)
            {
                a[i] += 9;
                boolka = true;
                break;
            }
            if((a[i] - 48) + 6 <= 9)
            {
                a[i] += 6;
                boolka = true;
                break;
            }
            if((a[i] - 48) + 3 <= 9)
            {
                a[i] += 3;
                boolka = true;
                break;
            }
        }
        if(!boolka)
            for(int i = s - 1; i >= 0; i--)
                if((a[i] - 48) - 3 >= 0)
                {
                    a[i] -= 3;
                    boolka = true;
                    break;
                }
    }
    if(boolka)
    {
        for(int i = 0; i < s; i++)
            cout << a[i];
        return 0;
    }
    if(chet % 3 == 1)
    {
        for(int i = 0; i < s; i++)
        {
            if((a[i] - 48) + 8 <= 9)
            {
                a[i] += 8;
                boolka = true;
                break;
            }
            if((a[i] - 48) + 5 <= 9)
            {
                a[i] += 5;
                boolka = true;
                break;
            }
            if((a[i] - 48) + 2 <= 9)
            {
                a[i] += 2;
                boolka = true;
                break;
            }
        }
        if(!boolka)
            for(int i = s - 1; i >= 0; i--)
                if((a[i] - 48) - 1 >= 0)
                {
                    a[i]--;
                    boolka = true;
                    break;
                }
    }
    if(boolka)
    {
        for(int i = 0; i < s; i++)
            cout << a[i];
        return 0;
    }
    if(chet % 3 == 2)
    {
        for(int i = 0; i < s; i++)
        {
            if((a[i] - 48) + 7 <= 9)
            {
                a[i] += 7;
                boolka = true;
                break;
            }
            if((a[i] - 48) + 4 <= 9)
            {
                a[i] += 4;
                boolka = true;
                break;
            }
            if((a[i] - 48) + 1 <= 9)
            {
                a[i]++;
                boolka = true;
                break;
            }
        }
        if(!boolka)
            for(int i = s - 1; i >= 0; i--)
                if((a[i] - 48) - 2 >= 0)
                {
                    a[i] -= 2;
                    boolka = true;
                    break;
                }
    }
    for(int i = 0; i < s; i++)
        cout << a[i];
    return 0;
    return 0;
}
