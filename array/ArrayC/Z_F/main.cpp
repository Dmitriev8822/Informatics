#include <iostream>

using namespace std;

int main()
{
    int n1, n2, m1[101], m2[101], m3[101];

    cin >> n1;
    for(int i = 0; i < n1; i++)
        cin >> m1[i];

    cin >> n2;
    for(int i = 0; i < n2; i++)
        cin >> m2[i];

    int m, j;
    bool f = false;
    for(int i = 0; i < n1; i++)
    {
        for(;;)
        {
            if(f)
            {
                m3[i] = j;
                f = false;
                break;
            }
            break;
        }
        j = m1[i];
        for(int i = 0; i < n2; i++)
        {
            if(j == m2[i])
            {
                bool f = true;
                break;
            }
    }
    }
    for(int i = 0; i
    return 0;
}
