#include <iostream>

using namespace std;

int main()
{
    int sum;
    int p;
    int q;
    int n;
    int m;
    cin >> p >> q >> n >> m;
    //if(a == 0)
    for(int i = n; i <= m; i++)
    {
        if(i % 2 == 0)
            sum += p;
        else
            sum += q;
    }
    int minn = sum % 60;
    int ch = sum / 60;
    cout << ch << " ch" << minn << " min";
    return 0;
}
