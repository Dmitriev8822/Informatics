#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int buf[101];
    for(int i = 0; i < n; i++)
    {
        int t = buf[i];
        cin >> t;
        if(t == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
