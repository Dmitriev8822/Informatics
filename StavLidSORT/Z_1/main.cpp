#include <iostream>

using namespace std;

int main()
{
    int A[1002], n, res = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 1; i < n; i++)
        for(int j = n-1; j >= i; j--)
            if(A[j] < A[j-1])
                swap(A[j], A[j-1]);

    n = n/2+1;
    for(int i = 0; i < n; i++)
        res += A[i]/2+1;

    cout << res << endl;
    return 0;
}
