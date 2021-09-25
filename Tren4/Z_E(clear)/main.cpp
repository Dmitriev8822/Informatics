#include <iostream>

using namespace std;

#define INF 2147483646
#define MAXNUM 1000

int cookie_n;
int cookies[MAXNUM];

int simple_solve(int x)
{
    if (x < 0) return INF;
    if (x == 0) return 0;
    int best = INF;
    for (int j=0; j < cookie_n; j++)
    {
        int c = cookies[j];
        best = min(best, simple_solve(x-c)+1);
    }
    return best;
}

int main()
{
    int n;
    int K[1000];

    cin >> cookie_n;
    for(int j = 0; j < cookie_n; j++)
        cin >> cookies[j];
    cin >> n;
    for(int j = 0; j < n; j++)
        cin >> K[j];

    for(int j = 0; j < n; j++)
    {
        int k = K[j];

        if(simple_solve(k) != INF)
            cout << "1";
        else
            cout << "0";
        if(j + 1 < n)
            cout << " ";
    }
    cout << endl;
    return 0;
}
