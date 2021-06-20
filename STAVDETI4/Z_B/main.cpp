#include <iostream>
#include <algorithm>

using namespace std;

int compare(const void* a, const void* b)
{
	int x = *static_cast<const int*>(a);
	int y = *static_cast<const int*>(b);

    int xa = x % 10;
    int xb = y % 10;

	if(xa > xb)
		return 1;
    if(xa < xb)
        return -1;
    if(x > y)
    {
        return 1;
    }
	return 0;
}
int main()
{
    int n;
    cin >> n;
    int buf[101];
    for(int i = 0; i < n; i++)
        cin >> buf[i];

    qsort(buf, n, sizeof(int), compare);

    for(int i = 0; i < n; i++)
        cout << buf[i] << " ";
    return 0;
}
