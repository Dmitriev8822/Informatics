#include <iostream>

using namespace std;

int main()
{
    int n;
    int wd;
    cin >> n;
    cin >> wd;
    int cnt = 0;
    bool relax = false;
    for(int j = 0; j < n; j++)
    {
        if(wd > 7)
            wd = 1;
        if(wd == 1)
            relax = true;
        if(relax && wd == 7)
            cnt++;
        wd++;
    }
    cout << cnt << endl;
    return 0;
}
