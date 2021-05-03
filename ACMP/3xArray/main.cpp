#include <iostream>

using namespace std;

int main()
{
    int A[10][10][10];
    int n;
    cin >> n;
    for(int z = 0; z < 2; z++)
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> A[10][10][10];
    for(int z = 0; z < 2; z++)
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                cout << A[i][j][z] << " ";
            cout << endl;
        }
    return 0;
}
