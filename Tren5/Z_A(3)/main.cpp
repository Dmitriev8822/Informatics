#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int cnt = 0;
    cin >> a >> b;
    for(int i = a; i < b; i++)
    {
        int n = i;
        bool f = true;
        int num1 = n % 3;
        int num2;
        n /= 3;
        while(n != 0)
        {
            num2 = n % 3;
            if(num1 > num2)
            {
                f = false;
                break;
            }
            num1 = num2;
            n /= 3;
        }
        if(f)
            cnt++;
    }
        cout << cnt << endl;
    return 0;
}
