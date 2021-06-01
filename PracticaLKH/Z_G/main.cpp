#include <iostream>
#include <algorithm>

using namespace std;

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
    sort(ListX, ListX + N);
    sort(ListY, ListY + N);
    int dx = ListX[N-1] - ListX[0];
    int dy = ListY[N-1] - ListY[0];
    cout << dx*dy << endl;

    return 0;
}
