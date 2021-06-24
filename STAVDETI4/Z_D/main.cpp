#include <iostream>
#include <math.h>

using namespace std;


#define DIVIDERCOUNTMAX 21

typedef struct {
    int divider;
    int count;
    } divider_t;

static divider_t A[DIVIDERCOUNTMAX +1];

void addMultiplier(int multiplier, int count)
{
    divider_t *p = &A[0];
    for(int j=0; j<DIVIDERCOUNTMAX; j++)
    {
        if( p->divider == 0)
        {
            p->divider = multiplier;
            p->count = count;
            p++;
            p->divider = 0;
            break;
        }
        if( p->divider == multiplier)
        {
            if(p->count < count)
                p->count = count;

            break;
        }
        p++;
    }
}

void factorization(int value)
{
    int maxd = value;
    for(int j=2; j<=maxd; j++)
    {
        if(value <= 1)
            break;

        int count = 0;
        while(value % j == 0)
        {
            count++;
            value = value / j;
            if(value <= 1)
                break;
        }
        if(count > 0)
            addMultiplier(j, count);
    }
}


int main()
{
    A[0].divider = 0;
    int value;
    cin >> value;
    factorization(value);
    cin >> value;
    factorization(value);
    cin >> value;
    factorization(value);

    divider_t *p = &A[0];
    long long nok = 1;
    for(int j=0; j<DIVIDERCOUNTMAX; j++)
    {
        int d = p->divider;
        if( d == 0)
            break;
        int n = p->count;
        for(int k=0; k<n; k++)
            nok *= d;
        p++;
    }
    cout << nok << endl;
    return 0;
}
