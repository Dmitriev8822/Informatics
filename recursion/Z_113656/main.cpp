#include <iostream>

using namespace std;

/*! \details Функция определяет размер строки в потоке ввода.
Для этого, рекурсивно вычитываются все символы, пока не втсречается симовл перевода строки.
В результате работы возвращается количество символов до перевода строки.
Все символы остаются в потоке ввода.
*/
int getLength(int Len)
{
    char c = cin.get();
    if( c == '\n')
    {
        cin.unget();
        return Len;
    }
    Len = getLength(++Len);
    cin.putback(c);
    return Len;

}

void printOut(int L, int R)
{
    char c = cin.get();
    if( c == '\n')
        return;

    if(R < 0)
        cout << ")";
    cout << c;

    if(L > 0)
        cout << "(" ;

    L--;
    R--;
    printOut(L,R);
}

int main()
{
    int Len = getLength(0);
    int L = Len/2 - 1*(1 - Len%2);
    int R = L + 1 *(1 - Len%2);
    printOut(L,R);
    cout << endl;
    return 0;
}
