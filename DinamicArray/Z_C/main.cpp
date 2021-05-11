#include <iostream>

using namespace std;

int main()
{
    int X, Y;
    int x, y;
    cin >> x >> y;

    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
        {
            int V;
            cin >> V;
            if(V == 0)
            {
                X = i;
                Y = j;
            }
        }

    cout << X+1 << " " << Y+1 << endl;

    return 0;
}
