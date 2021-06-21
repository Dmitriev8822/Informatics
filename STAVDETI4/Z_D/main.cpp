#include <iostream>
#include <math.h>

using namespace std;


#define DIVIDERCOUNTMAX 21
//значение DIVIDERCOUNTMAX задается исходя из предположения, что минимальный
//простой множител равен 2, тогда DIVIDERCOUNTMAX является показателем
//степени двойки превышающем максимальное число. Например, 2^21 = 2097152, что
//больше заданного 1000000 более чем в два раза. Т.е. можно было задать 20.

typedef struct {
    int divider;  //делитель
    int count;    //показатель степени делителя
    } divider_t;

static divider_t A[DIVIDERCOUNTMAX +1];

void addMultiplier(int multiplier, int count)
{
    divider_t *p = &A[0];  //получаем адрес первого элемента массива
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
    //cout << value << " : ";
    int maxd = value; //static_cast<int>(sqrt(value)) + 1;
    for(int j=2; j<=maxd; j++)
    {
        if(value <= 1)
            break;

        int count = 0;
        while(value % j == 0)
        {
    //        cout << j << " ";
            count++;
            value = value / j;
            if(value <= 1)
                break;
        }
        if(count > 0)
            addMultiplier(j, count);
    }
    //cout << endl;
}


int main()
{
    A[0].divider = 0; //инициализация массива делителей
    int value;
    cin >> value;  //первое число
    factorization(value);
    cin >> value;  //второе число
    factorization(value);
    cin >> value;  //третье число
    factorization(value);

    divider_t *p = &A[0];  //получаем адрес первого элемента массива
    long long nok = 1;     //может получиться очень большое число.
    for(int j=0; j<DIVIDERCOUNTMAX; j++)
    {
        int d = p->divider;
        if( d == 0)  // проверка на конец списка делителей
            break;
        int n = p->count;
        for(int k=0; k<n; k++)  //возводим делитель в найденную степень
            nok *= d;
        p++;
    }
    cout << nok << endl;
    return 0;
}
