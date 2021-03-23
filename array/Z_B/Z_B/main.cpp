#include <iostream>

using namespace std;

int main()
{
    int n, a[10000];
    cin >> n;
    int k = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > -1)
            k++;
    }
    cout << k << endl;
    return 0;
}
