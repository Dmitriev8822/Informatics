#include <iostream>

using namespace std;

int main()
{
    int n, a[10000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int j = a[0];
    for(int i = 1; i < n; ++i){
        if(j > 0 && a[i] > 0 || j < 0 && a[i] < 0)
        {
            cout << "YES" << endl;
            return 0;
        }
        j = a[i];
    }
    cout << "NO" << endl;
    return 0;
}
