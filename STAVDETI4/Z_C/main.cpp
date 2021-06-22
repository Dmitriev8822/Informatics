#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int buf[111][111];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> buf[i][j];

    int imain = 0, jmain = 0;
    int maxi = 0, mini= 10000001;


    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            sum += buf[i][j];
        }
        if(maxi < sum)
        {
            imain = i;
            maxi = sum;
        }
    }

    for(int j = 0; j < n; j++)
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += buf[i][j];
        }
        if(mini > sum)
        {
            jmain = j;
            mini = sum;
        }
    }
    int res = buf[imain][jmain];
    //cout << "row = "<< imain << " col = " << jmain << " value = " << res;
    cout << res << endl;
    return 0;
}
