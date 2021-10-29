#include <iostream>

using namespace std;

char buf[110];

int main()
{
    int sum = 0;
    cin.getline(buf, 101);
    buf[0] = '9';
    for(int i = 0; i < 110; i++)
    {
        if(buf[i] >= '0' && buf[i] <= '9')
            sum += buf[i] - '0';
    }
    sum -= 9;
    char n = '9';
    while(1)
    {
        if((sum + (n - '0')) % 3 == 0)
        {
            buf[0] = n;
            break;
        }
    }
    return 0;
}
