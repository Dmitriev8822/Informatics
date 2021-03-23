#include <iostream>

using namespace std;

int main()
{
    int n, a[10000], am, an, sch = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    am = a[0];
    an = a[1];
    for(int i = 2; i < n; i++)
    {
        int att = a[i];
        if(am < an && att < an)
                sch++;
            am = an;
            an = att;
    }
    cout << sch << endl;
    return 0;
}
