#include <iostream>
using namespace std;

void quick_sort(int a[], int n)
{
    int i = 0, j = n-1, temp, p;
    p = a[n/2];
    do {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j)
        {
            temp = a[i]; a[i] = a[j]; a[j] = temp;
            i++; j--;
        }
    } while ( i<=j );
    if (j > 0) quick_sort(a, j);
    if (n > i) quick_sort(a+i, n-i);
}
int main()
{
    int a[1000], n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    quick_sort(a, n);
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
