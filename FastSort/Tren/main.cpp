#include <iostream>
using namespace std;

void fsort(int a[], int n)
{
    int i = 0, j = n-1, spp, mid;
    mid = a[n/2];
    do{
            while(a[i] < mid) i++;
            while(a[j] > mid) j--;
            if(i <= j)
            {
                spp = a[i]; a[i] = a[j]; a[j] = spp;
                i++; j--;
            }
    } while(i <= j);
    if(j > 0) fsort(a, j+1);
    if(n > i) fsort(a+i, n-i);
}

int a[1000000];
int main()
{
    int m;
    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> a[i];
    fsort(a, m);
    for(int i = 0; i < m; i++)
        cout << a[i] << " ";
    return 0;
}
