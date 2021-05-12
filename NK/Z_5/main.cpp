#include <iostream>
#include <cstring>

using namespace std;

char* deleteSpaces(char *in, char *out)
{
    while(*in != 0)
    {
        if(*in != ' ')
            *out++ = *in;
        in++;
    }
    *out = 0;
    return out;
}

void filter1(char *in)
{
    deleteSpaces(in, in);
    char *p;

    p = in;
    while(1)
    {
        p = strstr(p, "Ci");
        if(p == nullptr)
            break;

        *p++ = 'S';
        p++;
    }

    p = in;
    while(1)
    {
        p = strstr(p, "ci");
        if(p == nullptr)
            break;

        *p++ = 's';
        p++;
    }

    p = in;
    while(1)
    {
        p = strstr(p, "Ce");
        if(p == nullptr)
            break;

        *p++ = 'S';
        p++;
    }

    p = in;
    while(1)
    {
        p = strstr(p, "ce");
        if(p == nullptr)
            break;

        *p++ = 's';
        p++;
    }

    p = in;
    while(1)
    {
        p = strstr(p, "Ck");
        if(p == nullptr)
            break;

        *p++ = 'K';
        *p++ = ' ';
    }
    deleteSpaces(in, in);

    p = in;
    while(1)
    {
        p = strstr(p, "ck");
        if(p == nullptr)
            break;

        *p++ = 'k';
        *p++ = ' ';
    }
    deleteSpaces(in, in);

    p = in;
    while(1)
    {
        p = strstr(p, "c");
        if(p == nullptr)
            break;

        *p++ = 'k';
    }

    p = in;
    while(1)
    {
        p = strstr(p, "C");
        if(p == nullptr)
            break;

        *p++ = 'K';
    }

}

void filter2(char *in)
{
    char *p;
    p = in;
    while(1)
    {
        p = strstr(p, "ee");
        if(p == nullptr)
            break;

        *p++ = 'i';
        *p++ = ' ';
    }
    deleteSpaces(in, in);

    p = in;
    while(1)
    {
        p = strstr(p, "oo");
        if(p == nullptr)
            break;

        *p++ = 'u';
        *p++ = ' ';
    }
    deleteSpaces(in, in);

    p = in;
    while(1)
    {
        if(*p == 0)
            break;
        char c1 = *p++;
        if(*p == 0)
            break;
        char c2 = *p;

        if(c1 >= 'A' && c1 <= 'Z' && c2 >= 'a' && c2 <= 'z')
            c1 += 32;

        if(c2 >= 'A' && c2 <= 'Z' && c1 >= 'a' && c1 <= 'z')
            c2 += 32;

        if(c1 == c2 && (c1 >= 'a' && c1 <= 'z'))
        {
            *p = ' ';
            deleteSpaces(in, in);
            p = in;
        }
    }
}

void filter3(char *in)
{
    if(*in == 0)
        return;
    char *p = in;
    char *e = nullptr;
    int cnt = 0;
    while(1)
    {
        if(*p == 0)
            break;

        if(*p == 'e')
            cnt++;

        e = p++;
    }
    if(*e == 'e' && cnt > 1)
    {
        *e = 0;
    }
}

void filter4(char *in)
{
    if(strlen(in) > 3)
        return;
    char *p = in;
    char buf[4];
    for(int j = 0; j < 4; j++)
    {
        char c = *p++;
        if(c >= 'A' && c <= 'Z')
            buf[j] = c + 32;
        else
            buf[j] = c;
    }
    if(strcmp(buf, "a") == 0
    || strcmp(buf, "the") == 0
    || strcmp(buf, "an") == 0)
    {
        *in = 0;
    }
}

char* getDelimiter(char *p)
{
    char delimiters[] = {" .,?!:-;()\'\""};
    int dsize = strlen(delimiters);

    while(1)
    {
        char c = *p;
        if( c == 0)
            return p;

        for(int j=0; j < dsize; j++)
        {
            if(c == delimiters[j])
                return p;
        }
        p++;
    }
}

int main()
{
    char strIn[202];

    while(cin.peek() != '\n')
    {
        cin >> strIn;
        bool f = false;
        char *p = strIn;
        while(1)
        {
            if(strlen(p) == 0)
                break;
            char d;
            char *t = getDelimiter(p);
            if(t == p)
            {
                d = *t;
                cout << d;
                f = true;
                p++;
                continue;
            }
            d = *t;
            *t = 0;
            filter4(p);
            filter1(p);
            filter2(p);
            filter3(p);
            if(strlen(p))
            {
                cout << p;
                f = true;
            }
            if(d != 0)
                *t = d;
            else
                break;

            p = t;
        }
        if(f)
            cout << ' ';
    }
    cout << endl;

    return 0;
}
