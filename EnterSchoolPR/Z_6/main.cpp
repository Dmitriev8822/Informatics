#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 3, 5, 6, 2, 8, 4, 9, 0};
    int sum = 0;
    for (int i = 0; *(a+i) < 6; i++)
        sum += a[i];

    cout << sum;
    return 0;
}
