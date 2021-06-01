#include <iostream>
#include <algorithm>

using namespace std;

//void printArray(int N, int *pX, int *pY)
//{
//    for(int j=0; j<N; j++)
//    {
//        cout << pX[j]<< "\t" << pY[j] << endl;
//    }
//    cout << endl;
//}

int main()
{
    int N;
    cin >> N;
    int ListX[50];
    int ListY[50];
    for(int j = 0; j < N; j++)
    {
        cin >> ListX[j] >> ListY[j];
    }
    //printArray(N, ListX, ListY);
    sort(ListX, ListX + N);
    //printArray(N, ListX, ListY);
    sort(ListY, ListY + N);
    //printArray(N, ListX, ListY);
    int dx = ListX[N-1] - ListX[0];
    int dy = ListY[N-1] - ListY[0];
    cout << dx*dy << endl;

    return 0;
}
