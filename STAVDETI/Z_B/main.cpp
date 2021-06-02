#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    int maxi = -100;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if(t > 0)
            res++;
        else
        {
            if(res > maxi)
                maxi = res;
                res = 0;
        }
    }
    if(res > maxi)
        maxi = res;
    cout << maxi << endl;
    return 0;
}
