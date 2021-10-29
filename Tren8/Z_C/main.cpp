#include <iostream>

using namespace std;

int main()
{
    int s, n, a, b, sum = 0;
    cin >> s >> n;
    cin >> a >> b;

    if (n * (a + b) > s) {
        cout << 0;
        return 0;
    }

    sum+=n * 2;
    if (a > b) {
        sum+= (s - n * (a + b)) / b;
    }
    else {
        sum+= (s - n * (a + b)) / a;
    }

    cout << sum;
    return 0;
}

