#include <iostream>

using namespace std;

char maximum(char maxi)
{
    char n = cin.get();
    if(n == '\n')
        return maxi;

    if(n > maxi)
        return maximum(n);
    return maximum(maxi);
}
int main()
{
    cout << maximum(0) << endl;
    return 0;
}
