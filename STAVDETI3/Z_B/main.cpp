#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int buf[1001];
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    int sum = 0;
    int maxi = 0;
    n -= 2;

    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        sum = buf[i] + buf[i+1] + buf[i+2];
        if(maxi < sum)
        {
            maxi = sum;
            //cout << "sum = " << sum << endl;
        }
    }
    cout << maxi << endl;
    return 0;
}
