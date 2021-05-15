#include <iostream>
#include <cstring>

using namespace std;

int func0(char *p, int ig, char *ignd)
{
    ignd = p;
    int dif = ig;
    while(1)
    {
        char* d = strchr(p, '\\');
        if( d == nullptr )
            break;
        int t = d - p;
        if( t > ig)
        {
            ignd = d;
            dif = t -ig;
            break;
        }
        p = ++d;
    }
    return dif;
}

int func1(char *p, int N, char *ignh, char *ignt)
{
    int ig = strlen(p) - N;
    char *t = strstr(p, ":\\");
    if( t != nullptr)
    {
        p = t + 2;
    }
    char *h = p;
       t = p;
    ignh = p;
    ignt = p;
    int mindif = N;
    while(1)
    {
        int dif = func0(h,ig,t);
        if( dif < mindif)
        {
            ignh = h;
            ignt = t;
            mindif = dif;
        }
        if( dif == mindif && t < ignt)
        {
            ignh = h;
            ignt = t;
        }
        char* d = strchr(p, '\\');
        if( d == nullptr )
            break;

        d++;
        p = d;
        t = p;
    }

}

void printPath( const char *p, char *ignh, char *ignt)
{
    *ignh = 0;
    cout << p << '\\...';
    cout << ignt << endl;
}


int getLengthOfPath(char **bgn, char **fend)
{
    int len = 0;
    while(bgn < fend)
    {
        len += strlen(*bgn++);
        len++; // учитываем разделитель.
        cout << len << "=>" << *bgn << endl;
    }
    cout << endl;
    return len;
}
// возвращает указатель на строку до которой нужно удалить путь для размещения в N символах
char** findEndIgnore(char **bgn, char **fend, int N, int &len)
{
    while(bgn < fend)
    {
        len = getLengthOfPath(bgn,fend);
        if(N > len)
            break;
        bgn++;
    }
    return bgn;
}

char** findIgnore(char **bgn, char **fend, int N)
{
    char** res = bgn;
    char** maxIg = fend;
    int dif = N;
    while(bgn < fend)
    {
        int len = N;
        char** endIg = findEndIgnore(bgn, fend, N, len);
        int d = N - len;
        if( d < dif)
        {
            dif = d;
            maxIg = endIg;
            res = bgn;
        }
        else if(d == dif && endIg < maxIg)
        {
            maxIg = endIg;
            res = bgn;
        }
        N -= strlen(*bgn);
        bgn++;
        cout << "\\\\\\\\\\\\\\\\\\\\" << *bgn << endl;
    }
    return res;
}
const char src[] = "e:\\games\\burut\\goldenl.and\\data\\scripts\\charctrs\\npc\\2.txt";

int main()
{
    int N = 30;
    char Path[1002];
    char smalP[1002];
    strcpy(Path,src);
    cout << N << "\n" << Path << endl;
    //cin >> N;
    //cin >> Path;
    char* ignh;
    char* ignt;
    func1(Path, N, ignh, ignt);
    printPath(Path,ignh,ignt);
    return 0;

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
    countA++; // учитываем имя файла.

    //далее думаю выделить память под массив указателей на строки-элементы пути.
    //элементам этого массива присвоить дареса начал элементов из массива Path, символы "\"
    //заменить нулями.
    // Далее думать как построить выходную сроку из элементов.
    char **strList = new char*[countA];
    if(strList == nullptr) // если ошибка при быделении памяти, то завершаем работу.
        return -1;

    char **psl = strList;
    p = Path;

    while(1)
    {
        *psl = p;
        p = strchr(p, '\\');
        if(p == nullptr)
            break;
        *p = 0;  //замена разделителея на нуль приводит к преобразованию элеменат пути в отдельную строку.
        p++;
        psl++;
    }

    //test
//    psl = strList;
//    for(int j=0; j< countA; j++)
//    {
//        char *s =  *psl++;
//        cout << s << endl;
//    }
//    // или так:
//    cout << "variant2" << endl;
//    for(int j = 0; j < countA; j++)
//    {
//        cout << strList[j] << endl;
//    }
    N -= 4; // резервируем место для троеточия
    //определитм диапазан элементов которые можно удалять...
    int fbgn = 0;
    int fend = countA - 1;  //fend - индекс последнего элемента пути (имя файла)
    N -= strlen(strList[fend]);
    N -= 1; //учитываем разделитель

    if(strchr(strList[0], ':') != nullptr)
    {
        fbgn++;  // fbgn - индедкс следующего за именем диска елемената пути
        N -= strlen(strList[0]);
        N -= 1;  // учитываем разделитель
    }
    int len;
    char **bgnIg = findIgnore(&strList[fbgn], &strList[fend], N);
    char **endIg = findEndIgnore(bgnIg, &strList[fend], N, len);

    psl = strList;
    while(psl < &strList[fend])
    {
        char *s =  *psl;
        if(psl < bgnIg)
        {
            strcat(smalP, s);   //cout << s << '\\';
            strcat(smalP, "\\");
        }
        else if(psl == bgnIg)
        {
            strcat(smalP, "...\\"); //cout << "...\\";
        }
        else if(psl >= endIg)
        {
            strcat(smalP, s); //cout << s << '\\';
            strcat(smalP, "\\");
        }
        psl++;
    }
    strcat(smalP, *psl); //cout << *psl << endl;
    strcat(smalP, "\n");
    cout << smalP << endl << strlen(smalP) << endl;

    delete strList;

    return 0;
}
