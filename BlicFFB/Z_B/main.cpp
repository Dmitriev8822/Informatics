#include <iostream>

using namespace std;

int main()
{
    int M[3];
    cin >> M[0] >> M[1] >> M[2];
    int I[] = {0,1,2,1};
    int cnt = 0;
    int index = 0;
    while(1)
    {
        int v = M[I[index]];
        if(v == 0)
            break;
        cnt++;
        M[I[index]] = v-1;
        index++;
        if(index > 3)
            index = 0;
    }
    cout << cnt;
    return 0;
}
