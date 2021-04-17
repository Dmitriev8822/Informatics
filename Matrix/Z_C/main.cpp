#include <iostream>

using namespace std;

int main()
{
    //int A[100][100];
    int n, m;
    cin >> n >> m;
    int x, y;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int t;
            cin >> t; //A[i][j];
            if(/*A[i][j]*/ t == 0)
            {
                x = i;
                y = j;
            }
        }
    }
    cout << x+1 << " " << y+1 << endl;
    return 0;
}
