#include <iostream>
#include <algorithm>

using namespace std;

void deleter(int* p, int m)
{
    for(int j = 0; j < m; j++)
        for(int i = j+1; i < m-1; i++)
        {
            if(p[j] == p[i])
                p[j] = 0;
        }
}

void printer(int* p, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(p[i] != 0)
        {
            cout << p[i] << " ";
            //cout << "El[" << i << "] = "<< p[i] << "    ";
        }
    }
    cout << endl;
}

int main()
{
    int n, m;
    int buf[5000];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    cin >> m;
    m = m+n;
    for(int i = n; i < m; i++)
        cin >> buf[i];

    deleter(buf, m);
    sort(buf, buf+m);
    printer(buf, m);
    return 0;
}
