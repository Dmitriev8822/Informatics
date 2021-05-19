#include <iostream>
#include <cstring>

using namespace std;

// Пропускает пробелы, идущие подряд. Возвращает указатель на перый не пробельный символ.
char* skipDelimiters(char *p)
{
    while(*p == ' ')
        p++;

    return p;
}

// ищет конц последовательности символов, заканчивающихся пробелом или нулем.
char* getTaiOflWord(char *p)
{
    //while((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
    while(*p != ' ' && *p != 0)
        p++;

    return p;
}

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
  char str[502];
  cin.getline(str,501);
  printWords(str);
  return 0;
}
