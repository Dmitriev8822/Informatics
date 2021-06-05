#include <iostream>

using namespace std;

int** new2DArray(int xmax, int ymax)
{
    int **res = new int*[xmax];
    for(int j=0; j<ymax; j++)
        res[j] = new int[ymax];

    return res;
}

void del2DArray(int **p, int x)
{
    for(int j=0; j<x; j++)
        delete[] p[j];
    delete[] p;
}


int main()
{
    int n;
    cin >> n;
    int **arr = new2DArray(n,n);

    for(int x=0; x<n; x++)
        for(int y=0; y<n; y++)
            arr[x][y] = -1;

    int x  = 0;
    int y  = 0;
    int d  = 0;
    int i  = 1;
    arr[x][y] = i;
    int N = n*n;
    while(i < N)
    {
        int ax;
        int ay;
        switch(d)
        {
            case 0: ax = x+1;
                    if(ax < n && arr[ax][y] == -1)
                    {
                        x = ax;
                        arr[x][y] = ++i;
                    }
                    else
                        d = 1;
                    break;

            case 1: ay = y+1;
                    if(ay < n && arr[x][ay] == -1)
                    {
                        y = ay;
                        arr[x][y] = ++i;
                    }
                    else
                        d = 2;
                    break;

            case 2: ax = x - 1;
                    if(ax >= 0 && arr[ax][y] == -1)
                    {
                        x = ax;
                        arr[x][y] = ++i;
                    }
                    else
                        d = 3;
                    break;

            case 3: ay = y-1;
                    if(ay >= 0 && arr[x][ay] == -1)
                    {
                        y = ay;
                        arr[x][y] = ++i;
                    }
                    else
                        d = 0;
                    break;
        }

    }
    for(int y=0; y<n; y++)
    {
        for(int x=0; x<n; x++)
            //cout << arr[x][y] << " ";
            printf("%4d",arr[x][y]);
        cout << endl;
    }
    return 0;
}
