#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int p;
    int q;
    int n;
    int m;
    cin >> p >> q >> n >> m;
    for(int i = n; i <= m; i++)
    {
        if(i % 2 == 0)
            sum += p;
        else
            sum += q;
    }
    int ch = sum / 60;
    int minn = sum - 60 * ch;

    cout << ch << " ch " << minn << " min" << endl;
    return 0;
}
