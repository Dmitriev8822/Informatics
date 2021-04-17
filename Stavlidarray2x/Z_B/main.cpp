#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i,j,A[31][31];
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        A[i][j]=0;
        }
    }
    A[0][0]=1;
    A[1][0]=1;
    A[1][1]=1;
    for(i=2;i<=n;i++){
        A[i][n]=1;
        A[i][0]=1;
        for(j=1;j<n;j++){
        A[i][j]=A[i-1][j]+A[i-1][j-1];
        }
        n++;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    return 0;
}
