#include <iostream>

using namespace std;

int main()
{
    char buf[502];
    cin.getline(buf, 500);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cout << buf[i];

    cout << endl;
    return 0;
}
