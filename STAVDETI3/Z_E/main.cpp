#include <iostream>

using namespace std;

int** newIntArray2D(int y, int x)
{
    int **p = new int*[y];
    for(int j=0; j<y; j++)
        p[j] = new int[x];
    return p;
}

void deleteIntArray2D(int** p, int y)
{
    for(int j=0; j<y; j++)
        delete[] p[j];
    delete[] p;
}

void printIntArray(int **p, int maxY, int maxX)
 {
    for(int y = 0; y < maxY; y++)
    {
        for(int x = 0; x < maxX; x++)
        {
            int v = p[y][x];
            cout << v << " ";
        }
        cout << endl;
    }
}


int main()
{
    // Олин листок
    int a; //высота
    int b; //ширина
    int **pO;
    // Танин листок
    int h; //высота
    int w; //ширина
    int **pT;

    int osi; // смещение по строкам
    int osj; // смещение по столбцам

    cin >> a >> b;
    pO = newIntArray2D(a, b);
    for(int j=0; j<a; j++)
        for(int i=0; i<b; i++)
        {
            int v;
            cin >> v;
            pO[j][i] = v;
        }
    cin >> h >> w;
    cin.ignore();
    pT = newIntArray2D(h, w);
    for(int j=0; j<h; j++)
    {
        char str[101];
        cin.getline(str,101);
        for(int i=0; i<w; i++)
        {
            int v = 0;
            if(str[i] == '.')
                v = 1;
            pT[j][i] = v;
        }
    }
    cin >> osi >> osj;

    //printIntArray(pO, a, b);
    //cout << endl;
    //printIntArray(pT, h, w);
    //cout << endl;
    //cout << osi << " " << osj << endl;

    osi -= 1;
    osj -= 1;
    int summ = 0;
    for(int j=0; j<h; j++)
        for(int i=0; i<w; i++)
        {
            if(pT[j][i] == 1)
                summ += pO[j+osi][i+osj];
        }

    cout << summ << endl;
    deleteIntArray2D(pT, h);
    deleteIntArray2D(pO, a);

    return 0;
}
