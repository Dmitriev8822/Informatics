#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int buf[1001];
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    int maxi = 0;

    for(int i = 0; i < n; i++)
    {
        int i1 = i+1;
        if( i1 >= n)
            i1 -= n;
        int i2 = i+2;
        if( i2 >= n)
            i2-= n;

        int sum = buf[i] + buf[i1] + buf[i2];
        if(maxi < sum)
        {
            maxi = sum;
        }
        //cout << "sum = " << sum << endl;
    }
    cout << maxi << endl;
    return 0;
}
