#include <iostream>

using namespace std;

int main()
{
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    n2 *= 2;
    if((n1 + n2) % 2 != 0)
    {
        cout << "No" << endl;
    }
    else
    {
        if(n1 % 2 == 0 && n2 % 2 == 0)
        {
            cout << "Yes" << endl;
            cout << n1 / 4 << " " << n2 / 2 << endl;
        }
        else
        {
            int cntb = 0;
            int cntm = 0;
            int k1 = 0;
            int k2 = 0;
            while(n2 != 0)
            {
                if(k1 >= k2)
                {
                    k2 += 2;
                }
                else
                {
                    k1 += 2;
                    cntb++;
                }
                n2 -= 2;
            }
            while(n1 != 0)
            {
                if(k1 >= k2)
                    k2++;
                else
                {
                    k1++;
                    cntm++;
                }
                n1--;
            }
            cout << "Yes" << endl;
            cout << cntm << " " << cntb << endl;
        }
    }
    return 0;
}
