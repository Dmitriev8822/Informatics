#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    char Path[1002];
    cin >> N;
    cin >> Path;
    char *p = Path;
    //для начала пытаемся найти количество элементов пути к файлу отделнных символом "\"
    int countA = 0;
    while(1)
    {
        p = strchr(p, '\\');
        if(p == nullptr)
            break;
        countA++;
        p++;
    }
    //далее думаю выделить память под массив указателей на строки-элементы пути.
    //элементам этого массива присвоить дареса начал элементов из массива Path, символы "\"
    //заменить нулями.
    // Далее думать как построить выходную сроку из элементов.

    cout << countA << endl;
    return 0;
}
