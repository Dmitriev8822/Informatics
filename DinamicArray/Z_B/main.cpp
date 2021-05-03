#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int h, m, s;
    cin >> n;
    int *A = new int [n];
    for(int i = 0; i < n; i++)
    {
        cin >> h >> m >> s;
        A[i] = h*3600 + m*60+s;
    }
    sort(A, A+n);
    for(int i = 0; i < n; i++)
        cout << A[i]/3600 << " " << A[i]%3600/60 << " " << A[i]%3600%60 << endl;
    delete []A;
    return 0;//
}
