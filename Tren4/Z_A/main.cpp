#include <iostream>

using namespace std;



int main()
{
    int N;
    int A[100000];
    cin >> N;
    for(int j=0; j<N; j++)
        cin >> A[j];

    int cnt=0;
    for(int j=0; j<N; j++)
    {
        int index = j;
        int summ;
        for(int k=0; k<N; k++)
        {
            summ += A[index];
            if(summ <= 0)
                break;
            index += 1;
            if(index >= N)
                index = 0;
        }
        if(summ > 0)
            cnt ++;
    }
    cout << cnt << endl;
    return 0;
}
