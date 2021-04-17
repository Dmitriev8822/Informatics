#include <iostream>
#include <algorithm>

using namespace std;

/*void fsort(int S[], int n)
{
    int i=0, j=n-1, spp, mid;
    mid = S[n/2];
    do{
            while(S[i] < mid) i++;
            while(S[j] > mid) j--;
            if(i <= j)
            {
                spp = S[i]; S[i] = S[j]; S[j] = spp;
                i++; j--;
            }
    }while(i <= j);
    if(j > 0) fsort(S, j+1);
    if(n > i) fsort(S+i, n-i);
}
*/
int main()
{
    int A[100][100];
    int S[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= 3; j++)
        {
            cin >> A[i][j];
            if(j == 3)
                S[i] += A[i][j];
            S[i] = (S[i] + A[i][j]) * 60;
        }
        cout << S[0] << endl;
    }
    //fsort(S, n);
    for(int i = 0; i < n; i++)
        cout << S[i] << endl;
    return 0;
}
