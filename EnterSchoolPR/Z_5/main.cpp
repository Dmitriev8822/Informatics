#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int maxi = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            int t;
            cin >> t;
            if(t > maxi)
                maxi = t;
        }
    cout << maxi << endl;
    return 0;
}
