#include <iostream>

using namespace std;

int main()
{
    int N;
    int x;
    int y;
    cin >> N >> x >> y;

    for(int j=1; j <= N; j++)
    {
        if(y * j % x == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
