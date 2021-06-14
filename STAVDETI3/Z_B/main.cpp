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

    for(int j = 0; j < n; j++)
    {
        int t = j+3;
        if(t > n)
            break;
        for(int i = j; i < t; i++)
        {
            sum += buf[i];
            //cout << "sum = " << sum << endl;
        }
        if(maxi < sum)
            maxi = sum;

        sum = 0;
    }
    cout << maxi << endl;
    return 0;
}
