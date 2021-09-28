#include <iostream>

using namespace std;

int sizee(int num)
{
    int cnt = 0;
    while(num != 0)
    {
        num /= 10;
        cnt++;
    }
    return cnt;
}

int comp(int n)
{
    int num = 0;
    int i = 1;
    while(n >= 2)
    {
        num += (n % 3) * i;
        n /= 3;
        i *= 10;
    }
    return num;
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    int glcnt = 0;
    for(int i = a; i <= b; i++)
    {
        bool f = true;
        int n = i;
        int num = comp(n);
        int cnt = sizee(num);
        for(int i = 0; i < cnt; i++)
        {
            if(num % 10 > num % 100 / 10)
                f = false;
        }
        if(f)
            glcnt++;
    }
    cout << glcnt << endl;
    return 0;
}
