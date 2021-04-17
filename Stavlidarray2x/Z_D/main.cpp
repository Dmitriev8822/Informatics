#include <iostream>

using namespace std;

void printValue(int v, bool fend)
{
    static bool par = true;

    if(par)
        cout << v;
    else
        cout << " " << v;

    par = false;

    if(fend)
    {
        par = true;
        cout << endl;
    }
}

int main()
{
    int P[30][30];
    short n;

    cin >> n;

    for(short row=0; row<n; row++)
        for(short column=0; column<n; column++)
            P[column][row] = 0;

    for(short row=0; row<n; row++)
    {
        for(short column=0; column<=row; column++)
        {
            if(column == row)
            {
                P[column][row] = 1;
                printValue(1, true);
            }
            else if(column == 0)
            {
                P[column][row] = 1;
                printValue(1, false);
            }
            else
            {
                int t = P[column][row - 1] + P[column - 1][row - 1];
                P[column][row] = t;
                printValue(t, false);
            }
        }
    }
    return 0;
}
