#include <iostream>
#include <cstring>

using namespace std;

char* skipDelimiters(char *p)
{
    while(*p == ' ')
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

char* getTaiOflWord(char *p)
{
    while((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
        p++;

    return p;
}

int main ()
{
  char str[502];
  cin.getline(str,501);
  printWords(str);
 /* char * pch;
  pch = strtok (str," ");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ");
  }*/
  return 0;
}
