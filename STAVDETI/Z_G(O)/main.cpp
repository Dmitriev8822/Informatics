#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int maxi = 0, maxii = 0;
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        cin >> k;
        if(maxi < k)
        {
            maxii = maxi;
            maxi = k;
        }
        if (maxii < k && k < maxi)
            maxii = k;
    }
    cout << maxii << endl;
    return 0;
}
