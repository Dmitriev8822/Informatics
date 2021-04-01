#include <iostream>

using namespace std;

int main()
{
 int n, a[100], chet=0;
 cin >> n;
 for(int i=0; i<n; i++)
 cin >> a[i];
 for(int i=0; i<n; i++)
 for(int m=i+1; m<n; m++)
 if(a[i]==a[m]) chet++;
 cout << chet << endl;
 return 0;
}
