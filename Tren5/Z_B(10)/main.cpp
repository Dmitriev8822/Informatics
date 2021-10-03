#include <iostream>

using namespace std;

int funk(int a, int b)
{
    if(0 == b)
        return 1;
    if(1 == b)
        return a;
    if(a < b)
        return 0;

    int k = 0;
    for(int i = 0; 1; i++)
    {
        int u = b + i * (b-1);
        if(u > a)
            break;

        k += a - u + 1;
    }
    return k;
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << funk(n, m) << endl;
    return 0;
}
