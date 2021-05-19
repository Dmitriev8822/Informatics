#include <iostream>

using namespace std;

//void printField(char **f, int N, int M)
//{
//    for(int row=0; row < N; row++)
//    {
//        for(int col=0; col < M; col++)
//        {
//            cout << f[row][col] << ' ';
//        }
//        cout << endl;
//    }
//}

int findPath(char **field, int N, int M)
{
    char step = 0;
    char prestep = 0;
    // ищем начальное положение коня, задаем ему занчение ноль.
    for(int row=0; row < N; row++)
    {
        for(int col=0; col < M; col++)
        {
            if( field[row][col] == 'h' )
            {
                field[row][col] = '0' + step++;
                break;
            }
        }
        if(step > 0)
            break;
    }
    // ищем пути волновым способом
    int tr = -1;
    int tc = -1;
    bool go = true;
    while(go)
    {
        //printField(field, N, M);
        go = false;
        for(int row=0; row < N; row++)
        {
            for(int col=0; col < M; col++)
            {
                char v = field[row][col];
                if( v == prestep + '0')
                {
                    // 1
                    int pr = row - 2;
                    int pc = col + 1;
                    if( pr >= 0 && pc < M
                    && ((field[row-1][col] != '*' && field[row-2][col]   != '*')
                    ||  (field[row][col+1] != '*' && field[row-1][col+1] != '*')))
                    {
                        if(field[pr][pc] == '.')
                        {
                            field[pr][pc] = step + '0';
                            go = true;
                        }
                        else if(field[pr][pc] == 's')
                        {
                            tr = pr;
                            tc = pc;
                            break;
                        }
                    }
                    // 2
                    pr = row - 1;
                    pc = col + 2;
                    if( pr >= 0 && pc < M
                    && ((field[row-1][col  ] != '*' && field[row-1][col+1] != '*')
                    ||  (field[row  ][col+1] != '*' && field[row  ][col+2] != '*')))
                    {
                        if(field[pr][pc] == '.')
                        {
                            field[pr][pc] = step + '0';
                            go = true;
                        }
                        else if(field[pr][pc] == 's')
                        {
                            tr = pr;
                            tc = pc;
                            break;
                        }
                    }
                    // 3
                    pr = row + 1;
                    pc = col + 2;
                    if( pr < N && pc < M
                    && ((field[row  ][col+1] != '*' && field[row  ][col+2] != '*')
                    ||  (field[row+1][col  ] != '*' && field[row+1][col+1] != '*')))
                    {
                        if(field[pr][pc] == '.')
                        {
                            field[pr][pc] = step + '0';
                            go = true;
                        }
                        else if(field[pr][pc] == 's')
                        {
                            tr = pr;
                            tc = pc;
                            break;
                        }
                    }
                    // 4
                    pr = row + 2;
                    pc = col + 1;
                    if( pr < N && pc < M
                    && ((field[row+1][col  ] != '*' && field[row+2][col  ] != '*')
                    ||  (field[row  ][col+1] != '*' && field[row+1][col+1] != '*')))
                    {
                        if(field[pr][pc] == '.')
                        {
                            field[pr][pc] = step + '0';
                            go = true;
                        }
                        else if(field[pr][pc] == 's')
                        {
                            tr = pr;
                            tc = pc;
                            break;
                        }
                    }
                    // 5
                    pr = row + 2;
                    pc = col - 1;
                    if( pr < N && pc >= 0
                    && ((field[row+1][col  ] != '*' && field[row+2][col  ] != '*')
                    ||  (field[row  ][col-1] != '*' && field[row+1][col-1] != '*')))
                    {
                        if(field[pr][pc] == '.')
                        {
                            field[pr][pc] = step + '0';
                            go = true;
                        }
                        else if(field[pr][pc] == 's')
                        {
                            tr = pr;
                            tc = pc;
                            break;
                        }
                    }

                    // 6
                    pr = row + 1;
                    pc = col - 2;
                    if( pr < N && pc >= 0
                    && ((field[row+1][col  ] != '*' && field[row+1][col-1] != '*')
                    ||  (field[row  ][col-1] != '*' && field[row  ][col-2] != '*')))
                    {
                        if(field[pr][pc] == '.')
                        {
                            field[pr][pc] = step + '0';
                            go = true;
                        }
                        else if(field[pr][pc] == 's')
                        {
                            tr = pr;
                            tc = pc;
                            break;
                        }
                    }

                    // 7
                    pr = row - 1;
                    pc = col - 2;
                    if( pr >= 0 && pc >= 0
                    && ((field[row-1][col  ] != '*' && field[row-1][col-1] != '*')
                    ||  (field[row  ][col-1] != '*' && field[row  ][col-2] != '*')))
                    {
                        if(field[pr][pc] == '.')
                        {
                            field[pr][pc] = step + '0';
                            go = true;
                        }
                        else if(field[pr][pc] == 's')
                        {
                            tr = pr;
                            tc = pc;
                            break;
                        }
                    }

                    // 8
                    pr = row - 2;
                    pc = col - 1;
                    if( pr >= 0 && pc >= 0
                    && ((field[row-1][col  ] != '*' && field[row-2][col  ] != '*')
                    ||  (field[row  ][col-1] != '*' && field[row-1][col-1] != '*')))
                    {
                        if(field[pr][pc] == '.')
                        {
                            field[pr][pc] = step + '0';
                            go = true;
                        }
                        else if(field[pr][pc] == 's')
                        {
                            tr = pr;
                            tc = pc;
                            break;
                        }
                    }

                }
            }
            if(tr >= 0)
                break;
        }
        if(tr >= 0)
            break;
        prestep = step;
        step++;
    }
    if(tr >= 0 && tc >= 0)
        return step;
    return -1;
}

//const char* F[] = {
//        "h.+..",
//        "**.**",
//        "..+*s",
//        "+.+..",
//        "....."};

int main()
{
    int N;
    int M;
    cin >> N >> M;
    //N = M = 5;

    char **field = new char*[N];
    for(int row = 0; row < N; row++)
        field[row] = new char[M];

    for(int row = 0; row < N; row++)
    {
        //const char *p = F[row];
        for(int col=0; col < M; col++)
        {
            cin >> field[row][col];
            //field[row][col] = *p++;
        }
    }

    cout << findPath(field, N, M) << endl;

    for(int row=0; row < N; row++)
        delete field[row];
    delete field;

    return 0;
}
