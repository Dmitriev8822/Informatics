#include <iostream>

using namespace std;

void flip(int n)
{
    if(n <= 0)
    return;
    int v;
    cin >> v;
    flip(--n);
    cout << v << ' ';
}

int main()
{
    int N;
    cin >> N;
    flip(N);
    cout << endl;
    return 0;
}
