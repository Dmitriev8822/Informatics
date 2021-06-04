#include <iostream>
#include <cmath>

using namespace std;

int f (int x)
{
     int c = 1;
     while (x != 0)
     {
     c *= x % 10;
     x /= 10;
     }
     return c;
    }

    int main()
    {
     int n;
     int k;
     cin » n » k;
     int a[1000];
     for (int i = 0; i < n; i++)
     {
     cin » a[i];
     }

     int min = 2147483647;
     int res = 0;
     for (int i = 0; i < n; i++)
     {
     int b = f(a[i]);
     if (abs(b-k)<min) {
     min = abs(b-k);
     res = a[i];
     }
     }

     cout « res « endl;

 return 0;
