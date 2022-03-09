#include <iostream>

using namespace std;

int main()
{
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        int x;
        cin >> x;
        if(x % 3 == 0 && x % 10 == 4)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
