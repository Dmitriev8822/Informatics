#include <iostream>
#include <cstring>

using namespace std;


char* skipDelimiters(char *p)
{
    while(*p == ' ')
        p++;

    return p;
}

char* getTaiOflWord(char *p)
{
    while((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
        p++;

    return p;
}

void printStrList(char **p, int cap)
{
    for(int j=0; j < cap; j++)
    {
        puts(*p++);
    }
}

char* compareWord(char *pA, char *pB)
{
    int A = strlen(pA);
    int B = strlen(pB);

    if( A == 1 && B == 1)
    {
        if(*pA > *pB)
            return pA;
    }

    if(A >= 2 && B >= 2)
    {
        if(pA[1] > pB[1])
            return pA;
    }
    else
        if(A > B)
            return pA;

    return 0;
}

void bubbleSort(char **p, int cap)
{
    for(int i = 0; i < cap; i++)
    {   // i - номер прохода
        for( int j = cap-1; j > i; j--)
        {   // внутренний цикл прохода
            char* h = compareWord(p[j-1], p[j]);
            if( h != 0)
            {
                char *t = p[j];
                p[j] = h;
                p[j-1] = t;
            }
        }
    }
}

// функция для решения третьей задачи
void printWords(char *p)
{
    while(1)
    {
        p = skipDelimiters(p);
        if(*p == 0)
            break;
        char *bgn = p;
        p = getTaiOflWord(p);
        if(*p == 0)
        {
            puts(bgn);
            break;
        }
        *p = 0;
        puts(bgn);
        p++;
    }
}

int main ()
{
    char str[] ="   tah a df c ";
    //char str[] ="b a bbd dadc cfr";
    int cap = 0;
    char *p = str;

    while(1)
    {
        p = skipDelimiters(p);
        if(*p == 0)
            break;
        p = getTaiOflWord(p);
        cap++;
        if(*p == 0)
            break;
    }

    char** strList = new char*[cap];
    char** psl = strList;
    p = str;
    for(int j=0; j < cap; j++)
    {
        p = skipDelimiters(p);
        *psl++ = p;
        p = getTaiOflWord(p);
        *p = 0;
        p++;
    }
    cout << endl;
    printStrList(strList, cap);
    bubbleSort(strList, cap);
    cout << endl;
    printStrList(strList, cap);

    delete[] strList;

    return 0;
}
