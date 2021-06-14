#include <iostream>

using namespace std;

int maxX;
int maxY;

bool checkShip(char **p, int maxX, int maxY, int x, int y)
{
    int tx = x + 1;
    int ty = y;
    if( tx < maxX && p[tx][ty] != '.')
        return false;
    tx = x += 1;
    ty = y += 1;
    if( tx < maxX && ty < maxY && p[tx][ty] != '.')
        return false;
    tx = x+=1;
    ty = y+=1;
    if( tx < maxX && ty < maxY && p[tx][ty] != '.')
        return false;

}

char** newArray2D(int col, int row)
{
    char **p = new char*[col];
    for(int j=0; j<row; j++)
        p[j] = new char[row];
}

void deleteArray2D(char** p, int col, int row)
{
    for(int j=0; j<row; j++)
        delete p[j];
    delete p;
}

void printer(char **buf)
{
    for(int y = 0; y < maxY; y++)
    {
        for(int x = 0; x < maxX; x++)
            cout << buf[x][y] << " ";

        cout << endl;
    }
}

void printArray(char **p)
{
    for(int y = 0; y < maxY; y++)
    {
        for(int x = 0; x < maxX; x++)
            cout << p[x][y] << " ";

        cout << endl;
    }
}

int main()
{
    int maxY, maxX;
    cin >> maxX >> maxY;
    char **buf = newArray2D(maxX,maxY);
    for(int y = 0; y < maxY; y++)
        for(int x = 0; x  < maxX; x++)
            cin >> buf[x][y];

    //printer(buf, n, m);
    printArray(buf);

    int cnt = 0;
//    for(int i = 0; i < n; i++)
//    {
//        for(int j = 0; j < m; j++)
//        {
//            //bool res = testChip(buf, m, n, j, i);
//            if(res)
//                cnt++;
//        }
//    }
//    cout << res << endl;

    deleteArray2D(buff, maxX,maxY);
    return 0;
}
