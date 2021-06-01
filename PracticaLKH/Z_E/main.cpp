#include <iostream>

using namespace std;

int main()
{
    int N;
    int buf[100];
    cin >> N;
    for(int j=0; j < N; j++)
        cin >> buf[j];

    int res = 1000;
    for(int j = 1; j < N; j++)
    {
        int summ = 0;
        for(int k = 0; k < N; k++)
        {
            if(k < j)
                summ += buf[k];
            else
                summ -= buf[k];
        }
        int t = abs(summ);
        if(t < res)
            res = t;
    }
    cout << res << endl;
    return 0;
}
