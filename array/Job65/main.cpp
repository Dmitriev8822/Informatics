#include <iostream>

using namespace std;

/** \details Функция рекурсивно вызывает себя заданное
в аргументе count количество раз. При разматывании
стека выполняется ввод значений массива, оценка их знака и
подсчет положительных.
*/
int calcPositivValue(int count)
{
    if(count <= 0)
        return 0;

    int acc = calcPositivValue(--count);

    int value;
    cin >> value;
    if( value > 0)
        return ++acc;
    return acc;
}

int main()
{
    int cnt;
    cin >> cnt;
    cout << calcPositivValue(cnt) << endl;
    return 0;
}
