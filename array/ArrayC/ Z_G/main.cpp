#include <iostream>

using namespace std;

int a[1000000];

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
        cin >> a[i];
    int i = 0;
    for(; i < m-1;)
        if(a[i] != a[i+1]-1)
        {
            cout << a[i] << ",";
            i++;
        }
        else
        {
            cout << a[i] << "-";
            while(a[i] == a[i+1]-1)
                i++;
        }
    cout << a[i] << endl;
    return 0;
}
