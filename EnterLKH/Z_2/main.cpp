#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[257];
    char str2[257];
    cin.getline(str1, 255);
    cin.getline(str2, 255);
    char *p = &str2[0];
    int res = 0;
    while(1)
    {
        p = strstr(p, str1);
        if(p == 0)
            break;

        res++;
        p++;
    }
    cout << res << endl;

    return 0;
}
