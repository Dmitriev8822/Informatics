#include <iostream>

using namespace std;


int get_units(int s, int a, int b)
{
    int r1 = 0;
    int r2 = 0;

    if(s >= a)
        r1 = 1 + get_units(s - a, a, b);

    if(s >= b)
        r2 = 1 + get_units(s - b, a, b);

    if( r1 > r2)
        return r1;
    return r2;
}


int main()
{
    int s,n,a,b;
    cin >> s >> n;
    cin >> a >> b;

    //s = 103; n = 5; a = 10; b = 6;

    int ab = a+b;
    int units = 2*n;
    // учитывая что каждый участник должен получить минимум одно кофе и один кес,
    // из общей суммы вычитаем затраты на указанный минимум.
    s -= ab*n;
    int summ = 2*n;
    // остальные деньги пытаемся распределить.
    units += get_units(s,a,b);
    cout << units << endl;

    return 0;
}
