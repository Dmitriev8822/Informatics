#include <iostream>

using namespace std;

/** \details Массив gt служи для хранения обработанных чисел, что
позволяет не повторяться в подсчете одинаковых чисел. Количество
записанных в массив чисел хранится в переменной gt_size
*/
static int gt[101];
static int gt_size;

/** \details Если зачение value уже находится в массисе gt, то
возвращается -1, иначе это значение заносится в массив, изменяется
количество чисел - gt_size.
*/
int gt_add(int value)
{
    for(int j = 0; j < gt_size; j++)
    {
        if(gt[j] == value)
            return -1;
    }

    gt[gt_size] = value;
    gt_size++;
    return 0;
}

int main()
{
    int n;
    int a[101];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    gt_size = 0;
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        int j = a[i];
        if(gt_add(j) == 0)
        {
            /* здесь если число попалось впервые */
            /* считываем количество одинаковых чисел...*/
            int cnt = 0;
            for(int k = 0; k < n; k++)
            {
                {
                    if(j == a[k])
                        cnt++;
                }
            }
            /* определяем количество пар.*/
            res += cnt/2;
        }
    }
    cout << res << endl;
    return 0;
}
