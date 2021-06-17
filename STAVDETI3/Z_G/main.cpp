#include <iostream>

using namespace std;


char** newArray2D(int y, int x)
{
    char **p = new char*[y];
    for(int j=0; j<y; j++)
        p[j] = new char[x];
    return p;
}

void deleteArray2D(char** p, int y)
{
    for(int j=0; j<y; j++)
        delete[] p[j];
    delete[] p;
}

void printArray(char **p, int maxY, int maxX)
 {
    for(int y = 0; y < maxY; y++)
    {
        for(int x = 0; x < maxX; x++)
            cout << p[y][x] << " ";

        cout << endl;
    }
}

bool checkLayer(char *p)
{
    while(*p != 0)
    {
        if(*p != '*')
            return false;
        p++;
    }
    return true;
}

int main()
{
    int maxY, maxX;
    cin >> maxY >> maxX;

    char **buff = newArray2D(maxY, maxX +1);

    for(int y = 0; y < maxY; y++)
    {
        for(int x = 0; x  < maxX; x++)
        {
            cin >> buff[y][x];
        }
        buff[y][maxX] = 0;  //для получения нультерминированной строки
    }
    //printArray(buff, maxY, maxX);

    int n = 0;
    int cnt = 0;
    for(int y = 0; y < maxY; y++)
    {
        if(checkLayer(buff[y]) == false)
        {
            cnt += n*(n+1)/2;
            n = 0;
        }
        else
            n++;
    }
    if(n > 0)
        cnt += n*(n+1)/2;

    cout << cnt;

    deleteArray2D(buff, maxY);
    return 0;
}
