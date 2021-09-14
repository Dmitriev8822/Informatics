#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int strike = 0;
    int spare = 0;
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        int b1, b2;
        cin >> b1 >> b2;
        if(strike > 1)
            sum += (b1 + b2)*3;
        else if(strike == 1)
            sum += (b1 + b2)*2;
        else if(spare > 0)
            sum += b1*2 + b2;
        else if(strike == 0 && spare == 0)
            sum += b1 + b2;

        if(b1 == 10)
            strike++;
        else
            strike = 0;
        if(b1 != 10 && b1 + b2 == 10)
            spare++;
        else
            spare = 0;
    }
    cout << sum << endl;
    return 0;
}
