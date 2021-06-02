#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mmaxi = -1;
    int maxi = -1;
    int arr[2000];
    for(int i = 0; i < n; i++)
    {
        int t = arr[i];
        cin >> t;
        if(mmaxi > t)
            mmaxi = t;
    }

    for(int i = 0; i < n; i++)
        if(arr[i] > maxi && arr[i] < mmaxi)
            maxi = arr[i];

    cout << maxi << endl;
    return 0;
}
