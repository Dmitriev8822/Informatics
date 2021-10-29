#include <iostream>

using namespace std;

int main()
{
    int s;
    int ch;
    int oa;
    int ob;
    cin >> s >> ch;
    cin >> oa >> ob;
    s -= (oa + ob) * ch;
    cout << ch * 2 + s / min(oa, ob) << endl;
    return 0;
}
