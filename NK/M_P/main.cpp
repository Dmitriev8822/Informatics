#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int ch = 0;
    int k = 1;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
            ch = ch*10 + (a[i] - '0');

        else if(a[i] >= 65 && a[i] <= 90 && ch == 0)
        {
            if(k == 40)
            {
                cout << a[i] << endl;
                k = 0;
            }
            else
                cout << a[i];
            k++;
        }

        else
        {
            while(ch)
            {
                if(k == 40)
                {
                    cout << a[i] << endl;
                    k = 0;
                }
                else
                    cout << a[i];
                ch--;
                k++;
            }
            ch = 0;
        }
    }
    return 0;
}
