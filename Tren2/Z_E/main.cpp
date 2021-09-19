#include <iostream>
#include <cmath>

using namespace std;

int buf[100];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    int mini = 1000000000;
    for(int j = 0; j < n; j++)
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += sqrt(buf[j]*buf[i])*2;

        if(mini > sum)
            mini = sum;
    }

    cout << mini << endl;
    return 0;
}
