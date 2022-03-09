#include <iostream>

using namespace std;

int main()
{
    int n;
    int num = 1;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        num *= i;
        while(num % 10 == 0)
            num /= 10;

        num = num % 10;
    }
    cout << num << endl;
    return 0;
}
