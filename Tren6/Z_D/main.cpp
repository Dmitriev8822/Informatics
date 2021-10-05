#include <iostream>
#include <cstring>


using namespace std;

char* Tags[101];
char* HText[101];
char* Patterns[101];
char fe = 0;

void tolowcase(char *p)
{
    while(*p != 0)
    {
        char c = *p;
        if(c >= 'A' && c <= 'Z')
            *p = c + 32;
        p++;
    }
}

bool test_space_tag(char *tag, char **tags)
{
    while(1)
    {
        if(*tags == &fe)
            return true;
        if(strcmp(tag, *tags) == 0)
            return false;
        tags++;
    }
}

void clear_tag(char *ps, char **tags)
{
    char *pm = ps;
    char  buf[100];
    char *pb = buf;
    bool  f = false;
    while(1)
    {
        if(*ps == 0)
            break;
        if(*ps == '<')
        {
            f = true;
            ps++;
            if(*ps == '/')
                ps++;
            pb = buf;
            continue;
        }
        if(*ps == '>')
        {
            *pb = 0;

            if(test_space_tag(buf, tags))
            {
                *pm = ' ';
                 pm++;
            }
            ps++;
            f = false;
            continue;
        }
        if(f)
        {
            *pb = *ps;
             pb++;
        }
        else
        {
            *pm = *ps;
             pm++;
        }
        ps++;
    }
    *pm = 0;
}

int main()
{
    char buf[256];
    int k;
    cin >> k;
    cin.ignore();
    Tags[0] = &fe;
    for(int j=0; j<k; j++)
    {
        cin.getline(buf,255, '\n');
        tolowcase(buf);
        Tags[j] = new char[strlen(buf) + 1];
        strcpy(Tags[j],buf);
        Tags[j+1] = &fe;
    }
    cin >> k;
    cin.ignore();
    HText[0] = &fe;
    for(int j=0; j<k; j++)
    {
        cin.getline(buf,254, '\n');
        tolowcase(buf);
        clear_tag(buf,Tags);
        HText[j] = new char[strlen(buf) + 1];
        strcpy(HText[j],buf);
        HText[j+1] = &fe;
    }
    cin >> k;
    cin.ignore();
    for(int j=0; j<k; j++)
    {
        cin.getline(buf,254, '\n');
        tolowcase(buf);
        Patterns[j] = new char[strlen(buf) + 1];
        strcpy(Patterns[j],buf);
        Patterns[j+1] = &fe;
    }

    char **ppatterns = &Patterns[0];
    while(*ppatterns != &fe)
    {
        for(int j=0; j < 100; j++)
        {
            char *pstr = HText[j];
            if( pstr == &fe)
            {
                cout << 0 << endl;
                break;
            }
            char *p = strstr(pstr, *ppatterns);
            if( p == NULL)
                continue;
            cout << j+1 << endl;
            break;
        }
        ppatterns++;
    }

    return 0;
}
