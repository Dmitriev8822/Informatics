#include <iostream>
#include <cstring>

using namespace std;

int main()
{
        string s;
        cin >> s;
        int n;
        cin >> n;
        if(s == "School")
        {
            if(!(n % 2))
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
        else
            cout << "Yes" << endl;
    return 0;
}
