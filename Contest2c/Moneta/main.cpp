#include <iostream>

using namespace std;

int buf[100];
int arr[100];

bool allTG(int k)
{
    for(int i = 1; i < k; i++)
        if(buf[i-1] != buf[i])
            return false;

    return true;
}

int findMax(int k)
{
    int maxid;
    int maxi = -1;
    for(int i = 0; i < k; i++)
    {
        if(buf[i] > maxi)
        {
            maxi = buf[i];
            maxid = i;
        }
    }
    return maxid;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        int t;
        cin >> t;
        arr[i] = t;
        buf[i] = t*n;
    }
    while(1)
    {
        if(allTG(k))
        {
            cout << buf[0] << endl;
            return 0;
        }
        int y = findMax(k);
        buf[y] -= arr[y];
    }
    return 0;
}
