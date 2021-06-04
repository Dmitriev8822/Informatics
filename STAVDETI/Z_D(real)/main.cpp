#include <iostream>

using namespace std;

void MoveLeft(int* p1, int* p2, int n)
{
    while(n)
    {
        *p1 = *p2;
        p1++;
        p2++;
        n--;
    }
}

/*void Printer(int *p, int n)
{
    while(n)
    {
        cout << *p << " ";
        p++;
        n--;
    }
    cout << endl;
}*/

int FindLine(int* p, int n)
{
    int* t1 = p;
    int* t2 = p;
    int cnt = 0;
    int i = 0;
    while(i < n)
    {
        t2++;
        i++;
        if(*t1 == *t2)
            cnt++;
        else
        {
            if(cnt > 1)
            {
                MoveLeft(t1, t2, n-i);
                break;
            }
            t1 = t2;
            cnt = 0;
        }
    }
    cnt++;
    if(cnt < 3)
        return 0;

    return cnt;
}

int main()
{
    int buf[1500];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> buf[i];
    }
    //int buf[] = {1,2,2, 3, 3,3,3,3,2};
    //int n = sizeof(buf)/sizeof(int);
    //MoveLeft(buf, &buf[1], n-1);
    //Printer(buf, n);
    int sum = 0;
    while(1)
    {
        int res = FindLine(buf, n);
        if(res == 0)
            break;
        else
        {
            sum += res;
            n -= res;
        }
        //Printer(buf, n);
    }
    //cout << "summ = " << sum << endl;
    cout << sum << endl;
    return 0;
}
