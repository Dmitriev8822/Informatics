#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int mini = 2147483647;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            int k;
            cin >> k;
            if(k < mini)
                mini = k;
        }
    cout << mini << endl;
    return 0;
}
