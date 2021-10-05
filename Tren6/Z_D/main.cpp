#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

typedef vector<string> StringList_t;

StringList_t Tags;
StringList_t HText;
StringList_t Patterns;

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

void clear_tag(char* ps, StringList_t &dest)
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
            string tag(buf);
            if(find(Tags.begin(),Tags.end(), tag) == Tags.end())
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
    for(int j=0; j<k; j++)
    {
        cin.getline(buf,255, '\n');
        tolowcase(buf);
        string s(buf);
        Tags.push_back(s);
    }
    cin >> k;
    cin.ignore();
    for(int j=0; j<k; j++)
    {
        cin.getline(buf,254, '\n');
        tolowcase(buf);
        clear_tag(buf,Tags);
        string s(buf);
        HText.push_back(s);
    }
    cin >> k;
    cin.ignore();
    for(int j=0; j<k; j++)
    {
        cin.getline(buf,254, '\n');
        tolowcase(buf);
        string s(buf);
        Patterns.push_back(s);
    }

    for(auto ptrn : Patterns)
    {
        int number_str = 0;
        int res = 0;
        for(auto src : HText)
        {
            number_str++;
            string::size_type found = src.find(ptrn);
            if(found != string::npos)
            {
                res = number_str;
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}
