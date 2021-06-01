#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, res = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a/2%2 == 1)
            res++;
    }
    cout << res << endl;
    return 0;
}
