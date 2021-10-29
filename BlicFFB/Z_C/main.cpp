#include <iostream>

using namespace std;

int main()
{
    int mes, dat;
    cin >> mes >> dat;
    cout << mes << " " << dat << endl;
    while(mes <= 12)
    {
        if(mes == 9 || mes == 11)
        {
            if(dat + 7 >= 31)
                mes++;
            if((dat + 7) % 30 != 0)
                dat = (dat + 7) % 30;
            else
                dat = 30;
            cout << mes << " " << dat << '\n';
        }
        if(mes == 10)
        {
            if(dat + 7 >= 32)
                mes++;
            if((dat + 7) % 31 != 0)
                dat = (dat + 7) % 31;
            else
                dat = 31;
            cout << mes << " " << dat << '\n';
        }
        if(mes == 12)
        {
            if(dat + 7 >= 32)
                break;
            else
            {
                dat += 7;
                cout << mes << " " << dat << endl;
            }
        }
    }
    return 0;
}
