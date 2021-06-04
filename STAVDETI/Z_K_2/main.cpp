#include <iostream>

using namespace std;

int main()
{
 int n;
 cin >> n;
 int a[n];
 for (int i = 0; i < n; i++)
 {
 cin >> a[i];
 }
 int x;
 cin >> x;
 int c = 0;
 for (int i = n-1; i >= 0; i--)
 {
 if (x <= a[i])
 {
 c = i+1;
 break;
 }
 }

 cout << c+1 << endl;

 return 0;
}
