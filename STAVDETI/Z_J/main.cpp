#include <iostream>

using namespace std;

void flipper(int* p, int n, int m)
{
    while(n<=m)
    {
        swap(p[n-1], p[m-1]);
        n++;
        m--;
    }
}

void printer(int* p, int n)
{
    for(int i = 0; i < n; i++)
    cout << p[i] << " ";
}

int main()
{
    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;
    int buf[1001];
    for(int i = 0; i < N; i++)
        buf[i] = i+1;

    flipper(buf, A, B);
    flipper(buf, C, D);
    printer(buf, N);
    return 0;
}
