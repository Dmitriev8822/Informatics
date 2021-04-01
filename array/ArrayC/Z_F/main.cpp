#include <iostream>

using namespace std;

int main()
{
    int N[101];
    int M[101];
    int n,m;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> N[i];
    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> M[i];

    bool first = true;
    for(int i = 0; i < n; i++)
    {
        int value = N[i];
        int p = 0;
        for(; p < m; p++)
        {
            if(M[p] == value)
                break;
        }
        if(p == m)
        {
            if(!first)
                cout << " " << value;
            else
            {
                cout << value;
                first = false;
            }
        }
    }
    if(!first)
        cout << endl;
    return 0;
}
