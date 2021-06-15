#include <iostream>

using namespace std;


bool checkShip(char **p, int maxY, int maxX, int y, int x)
{
    int tx;
    int ty;

    if(p[y][x] != '.')
        return false;

    tx = x + 1; //справа
    ty = y;
    if( tx < maxX && p[ty][tx] != '.')
        return false;

    //tx = x + 1; //справа, снизу
    //ty = y + 1;
    //if( tx < maxX && ty < maxY && p[ty][tx] != '.')
    //    return false;

    tx = x;     //снизу
    ty = y + 1;
    if(ty < maxY && p[ty][tx] != '.')
        return false;

    //tx = x - 1; // снизу слева
    //ty = y + 1;
    //if(tx >= 0 && ty < maxY && p[ty][tx] != '.')
    //    return false;

    tx = x - 1; // слева
    ty = y;
    if(tx >= 0 && p[ty][tx] != '.')
        return false;

    //tx = x - 1; // ссверху слева
    //ty = y - 1;
    //if(tx >= 0 && ty >= 0 && p[ty][tx] != '.')
    //    return false;

    tx = x;     // серху
    ty = y - 1;
    if(ty >= 0 && p[ty][tx] != '.')
        return false;

    //tx = x + 1; // ссверху справа
    //ty = y - 1;
    //if(tx < maxX && ty >= 0 && p[ty][tx] != '.')
    //    return false;


    return true;
}

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

int main()
{
    //char inp[5][4] =   {
    //                {'*','*','*','*'},
    //                {'*','*','.','.'},
    //                {'*','.','.','.'},
    //                {'*','.','.','.'},
    //                {'.','.','.','.'}
    //                };

    //char inp[4][4] =   {
    //                {'*','*','*','*'},
    //                {'*','*','.','.'},
    //                {'*','.','.','.'},
    //                {'*','.','.','.'},
    //                };

    //char inp[4][3] =   {
    //                {'*','*','*'},
    //                {'.','.','.'},
    //                {'.','.','.'},
    //                {'*','*','*'}
    //                };

    int maxY, maxX;
    cin >> maxY >> maxX;
    cin.ignore();
    //maxY = 4;
    //maxX = 3;

    char **buff = newArray2D(maxY, maxX);

    for(int y = 0; y < maxY; y++)
    {
        char str[101];
        cin.getline(str, 101);
        for(int x = 0; x  < maxX; x++)
        {
            //buff[y][x] = inp[y][x];
            buff[y][x] = str[x];
        }
    }
    //printArray(buff, maxY, maxX);

    int cnt = 0;
    for(int y = 0; y < maxY; y++)
    {
        for(int x = 0; x < maxX; x++)
        {
            if(checkShip(buff, maxY, maxX, y, x))
                cnt++;
        }
    }
    cout << cnt << endl;

    deleteArray2D(buff, maxY);
    return 0;
}
