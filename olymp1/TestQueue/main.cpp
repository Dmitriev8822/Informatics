#include <iostream>
#include "include/s_queue.h"

using namespace std;

int main()
{
    s_queue Q1(20);
    s_queue Q2(20);

    for(int j = 0; j < 10; j++ )
    {
        Q1.push(j);
        printf("%2d ",j);
    }
    cout << endl;

    for(int j = 0; j < 10; j++ )
    {
        int v;
        Q1.pop(v);
        printf("%2d ",v);
    }

    return 0;
}
