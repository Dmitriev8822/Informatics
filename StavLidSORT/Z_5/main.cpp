#include <iostream>

using namespace std;

int main()
{
    unsigned int G[4];
    unsigned int mini = 30000;
    for(int i = 0; i < 4; i++)
        cin >> G[i];

    for(int i = 0; i < 4; i++)
    {
        unsigned int t;
        cin >> t;
        unsigned x = G[i];
        if(x != 0)
        {
            t = t*1000 / x;
            if(t < mini)
                mini = t;
        }
    }
    cout << mini << endl;
    return 0;
}
