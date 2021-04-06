#include <iostream>

using namespace std;

int main()
{
int n, m, k, xm, ym, xk, yk, xk2, yk2, a[1000], ii=0;
cin >> n >> m >> k;
for (int i=0; i<k; i++)
{
cin >> xm >> ym;
cin >> xk >> yk;
cin >> xk2 >> yk2;
if (((xm > xk && xm > xk2) ||(xm < xk && xm < xk2)) || ((ym > yk && ym > yk2) && (ym < yk && ym < yk2)))
{
a[i]=1;
ii++;
}
else {
if (((xm-ym==xk-yk)||(xm+ym==xk+yk)) &&((xm-ym==xk2-yk2)||(xm+ym==xk2+yk2)) && ((xk-yk==xk2-yk2)||(xk+yk==xk2+yk2)))
{
a[i]=0;
ii++;
}
else
{
a[i]=1;
ii++;
}
}

}
for (int i=0; i<k; i++)
{
if (a[i] == 1) cout << "YES" << endl;
else cout << "NO" << endl;
}
}
