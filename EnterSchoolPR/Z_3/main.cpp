#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1000; i < 9999; i++)
    {
        int sum = 0;
        int c = i;
        while(c)
        {
            sum += c%10;
            c /= 10;
        }
        if(sum == n)
            cout << i << " ";
    }
    return 0;
}
