#include <iostream>

using namespace std;

int main()
{
    int n;
    int summ = 0;
    cin >> n;
    while(n)
    {
        if(n % 6 == 0 && n % 10 == 4)
            summ += n;
        cin >> n;
    }
    cout << summ << endl;
    return 0;
}
