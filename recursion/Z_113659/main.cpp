#include <iostream>

using namespace std;

/** \details Выполняется последовательное чтение пар значений: номера сообщения и
номера связанного сообщения. Далее вычитывается номер хвостового сообщения и
выполняется рекурсивный вызов функции. Таким образом, на стеке вызовов функции в
переменных msg и link сохраняются все пары, а в переменной k сохраняется номер
хвостового сообщения.
При разматывании стека выполняется поиск связанных сообщений и подсчет найденных
совпадений.
*/
int delMessage(int cnt, int d)
{
    /* указатель на икомое сообщение хранится переменной k */
    static int k = 0;
    if(cnt <= 0)
    {
        cin >> k;
        return d;
    }
    int msg,link;
    cin >> msg >> link;
    d = delMessage(--cnt, d);
    /*
    если обнаружено корневое сообщение, то
    подсчет удаляемых сообщений прекращается.
    */
    if(k == 0)
        return d;
    /*
    Продолжается поиск сообщений.
    Если найдено сообщение, то увеличивается счетчик удаленных
    сообщений и обновляется цель поиска.
    */
    if(msg == k)
    {
        d++;
        k = link;
    }
    return d;
}


int main()
{
    /* Читается количество сообщений форума */
    int n;
    cin >> n;
    cout << delMessage(n,0) << endl;
    return 0;
}
