#include <iostream>
#include <math.h>

using namespace std;

bool prime(unsigned int n)
{
    unsigned int w = sqrt(n);
    for(unsigned int j = 2; j <= w; j++)
    {
        if(n % j == 0)
            return false;
    }
    return true;
}

unsigned int find_next_prime(unsigned int n)
{
    if(n < 2)
        n = 2;
    unsigned int res = n;
    while(!prime(n++))
        res = n;
    return res;
}

int main()
{
    int k;
    unsigned int N[2000];
    cin >> k;
    for(int j=0; j < k; j++)
        cin >> N[j];

    for(int j=0; j < k; j++)
    {
        cout << find_next_prime(N[j])<< endl;
    }
    return 0;
}
