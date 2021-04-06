#include <iostream>
using namespace std;

int sort(int a[], int n) {
      int i = 0, j = n-1, temp, p;
      p = a[n/2];
      do {
                while (a[i] < p) i++;
                while (a[j] > p) j--;
                if (i <= j) {
                       temp = a[i]; a[i] = a[j]; a[j] = temp;
                       i++; j--;
                }
     } while (i<=j);
     if (j > 0) sort(a, j+1);
     if (n > i) sort(a+i, n-i);
 }
 int a[1000000];

 int main()
    {
       int i, n, j, k, m, s, x;
       cin >> k >> m >> n;
       for (i=0;i<n;i++)
          cin>>a[i];
       sort(a, n);
       for (i=0;i<k;i++) {
          s += a[i];
          m = m - a[i];
       }
       for(int i = 0; i < n; ++i)
           cout << a[i] << " ";
       cout << endl;
       cout << m;
return 0;
}
