#include <iostream>
using namespace std;
int main()
{
int a[100];
int x;
int num = 0;
cin >> x;
for (int i = 0; i < x; i++)
{
cin >> a[i];
}
for (int i = 0; i < x; i++)
{
if (a[i] == a[i+1]) num++;
}
cout << num;
return 0;
}
