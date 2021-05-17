#include <iostream>

using namespace std;

char* sToi(char* s, int *res)
{
    while(1)
    {
        char c = *s;
        if(c < '0' || c > '9')
            break;
        int t = *res;
        *res = t * 10 + c - static_cast<int>('0');
        s++;
    }
    return s;
}

int main()
{
    int curH  = 0;
    int curM  = 0;
    int curS  = 0;
    int timeH = 0;
    int timeM = 0;
    int timeS = 0;

    char buf[10];

    cin >> buf;
    char *p = buf;
    p = sToi(p, &curH);
    p++;
    p = sToi(p, &curM);
    p++;
    p = sToi(p, &curS);

    cin >> buf;
    p = buf;
    int t1 = 0;
    int t2 = 0;
    int t3 = 0;
    p = sToi(p, &t1);
    if(*p == 0)
        timeS = t1;
    else
    {
        p++;
        p = sToi(p, &t2);
        if(*p == 0)
        {
            timeM = t1;
            timeS = t2;
        }
        else
        {
            p++;
            p = sToi(p, &t3);
            timeH = t1;
            timeM = t2;
            timeS = t3;
        }
    }
    int t = curH*3600 + curM*60 + curS + timeH*3600 + timeM*60 + timeS;
    int day = t/3600/24;
    t = t - day * 3600 * 24;
    int hour = t/3600;
    t = t - hour * 3600;
    int minute = t/60;
    t = t - minute * 60;

    cout << hour << ":" << minute << ":" << t;
    if(day > 0)
        cout << "+" << day << " days";
    cout << endl;

    return 0;
}
