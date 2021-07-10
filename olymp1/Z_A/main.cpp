#include <iostream>

#define A_DEBUG 1
#define ID_B   -1
#define ID_F   -2

using namespace std;

int** new2DArray(int xmax, int ymax)
{
    int **res = new int*[xmax];
    for(int j=0; j<xmax; j++)
        res[j] = new int[ymax];

    return res;
}

void del2DArray(int **p, int x)
{
    for(int j=0; j<x; j++)
        delete[] p[j];
    delete[] p;
}

int findB(int **p, int x, int y, int xmax, int ymax, int w)
{
    int res = 0;    //0 - нет измененных клеток.
                    //w - есть хотябы одна изененная клетка на номер волны

    int v = p[x][y];
    if( v != w -1)
        return res;


    int tx, ty;

    //test left
    tx = x - 1;
    ty = y;
    if( tx >= 0)
    {
        v = p[tx][ty];
        if( v == ID_B)
            return ID_B;
        if( v == 0)
        {
            p[tx][ty] = w;
            res = w;
        }
    }
    //test top
    tx = x;
    ty = y - 1;
    if(ty >= 0)
    {
        v = p[tx][ty];
        if( v == ID_B)
            return ID_B;
        if( v == 0)
        {
            p[tx][ty] = w;
            res = w;
        }
    }
    //test right
    tx = x + 1;
    ty = y;
    if(tx < xmax)
    {
        v = p[tx][ty];
        if( v == ID_B)
            return ID_B;
        if( v == 0)
        {
            p[tx][ty] = w;
            res = w;
        }
    }
    //test bottom
    tx = x;
    ty = y + 1;
    if(ty < ymax)
    {
        v = p[tx][ty];
        if( v == ID_B)
            return ID_B;
        if( v == 0)
        {
            p[tx][ty] = w;
            res = w;
        }
    }
    return res;
}

#if A_DEBUG == 1
void printField(int **p, int xmax, int ymax)
{
    cout << endl;
    for(int y=0; y < ymax; y++)
    {
        for(int x=0; x < xmax; x++)
        {
            int v = p[x][y];
            printf("%3d", v);
        }
        cout << endl;
    }
}
#endif // A_DEGUG

int main()
{
    int xa, ya;
    int xb, yb;
    int xf, yf;

    #if A_DEBUG == 1
    xa = 100; ya = 100;
    xb = 110; yb = 110;
    xf = 110; yf = 105;
    #else
    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xf >> yf;
    #endif // A_DEBUG

    //находим координаты поля, заданного точеками a,b,f
    int xmin = xa;
    if( xmin > xb) xmin = xb;
    if( xmin > xf) xmin = xf;

    int ymin = ya;
    if( ymin > yb) ymin = yb;
    if( ymin > yf) ymin = yf;

    int xmax = xa;
    if( xmax < xb) xmax = xb;
    if( xmax < xf) xmax = xf;

    int ymax = ya;
    if( ymax < yb) ymax = yb;
    if( ymax < yf) ymax = yf;
    //корректируем границу поля
    xmax++;
    ymax++;

    //строим отностиельную систему координат
    xa = xa - xmin;
    xb = xb - xmin;
    xf = xf - xmin;
    xmax = xmax - xmin;
    xmin = 0;

    ya = ya - ymin;
    yb = yb - ymin;
    yf = yf - ymin;
    ymax = ymax - ymin;
    ymin = 0;

    //создаем матрицу поля
    int **M = new2DArray(xmax, ymax);

    for(int y=0; y < ymax; y++)
        for(int x=0; x < xmax; x++)
            M[x][y] = 0;

    //устанавливаем точки в матрице поля
    M[xa][ya] =  1;
    M[xf][yf] = ID_F;
    M[xb][yb] = ID_B;

    int w = 2;
    bool modify = true;
    int res = 0;
    while(modify)
    {
        modify = false;
        for(int y=0; y < ymax; y++)
        {
            for(int x=0; x < xmax; x++)
            {
                res = findB(M,x,y,xmax,ymax,w);
                if( res == ID_B)
                    break;
                else if(res > 0)
                    modify = true;

            }
            if(res == ID_B)
                break;
        }
        #if A_DEBUG == 1
            printField(M,xmax,ymax);
        #endif
        if( res == ID_B)
            break;
        w++;
    }
    //удаляем матрицу поля
    del2DArray(M, xmax);

    if( res == ID_B)
        cout << w << endl;
    else
        cout << -1 << endl;

    return 0;
}
