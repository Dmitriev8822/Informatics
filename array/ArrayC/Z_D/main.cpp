#include <iostream>

using namespace std;

int main()
{
    int V[1000];
    int V_cnt = 0;
    int p = 0;

    while(1)
    {
        cin >> p;
        if(p == 0 || p > 4)
            break;
        int value = 0;
        for(int i=0; i < p; i++)
        {
            value *= 10;
            int v;
            cin >> v;
            value += v;
        }
        V[V_cnt] = value;
        V_cnt++;
    }
    cout << V_cnt;
    for(int i=0; i < V_cnt; i++)
        cout << " " << V[i];
    cout << endl;
    return 0;
}
