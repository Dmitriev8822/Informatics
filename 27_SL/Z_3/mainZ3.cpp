#include <iostream>
#include <cstring>

using namespace std;

int func0(char *p, int ig, char **ignd)
{
    char *h = p;
    *ignd    = p;
    int dif = ig;
    while(1)
    {
        char* d = strchr(h, '\\');
        if( d == nullptr )
            break;
        int t = d - p;
        if( t > ig)
        {
            dif  = t - ig;
            *ignd = d;
            break;
        }
        d++;
        h = d;
    }
    return dif;
}

int func1(char *p, int N, char **ignh, char **ignt)
{
    int ig = strlen(p) - N + 3;
    char *t = strstr(p, ":\\");
    if( t != nullptr)
    {
        p = t + 1;
    }

    t          = strchr(p,0);
    *ignh      = t;
    *ignt      = t;
    int mindif = N;

    while(1)
    {
        int dif = func0(p,ig,&t);
        if( dif < mindif)
        {
            *ignh = p;
            *ignt = t;
            mindif = dif;
        }
        if( dif == mindif && t < *ignt)
        {
            *ignh = p;
            *ignt = t;
        }
        p++;
        char* d = strchr(p, '\\');
        if( d == nullptr )
            break;

        p = d;
        t = p;
    }
    return 0;
}

void printPath( char *p, char *ignh, char *ignt)
{
    *ignh = 0;
    cout << p << "\\...";
    cout << ignt << endl;
}



const char src[] = "e:\\games\\burut\\goldenl.and\\data\\scripts\\charctrs\\npc\\2.txt";

int main()
{
    int N = 30;
    char Path[1002];
    strcpy(Path,src);
    cout << N << "\n" << Path << endl;
    //cin >> N;
    //cin >> Path;
    char* ignh = Path;
    char* ignt = Path;
    func1(&Path[0], N, &ignh, &ignt);
    printPath(&Path[0],ignh, ignt);

    return 0;
}
