#include <iostream>

#define MSIZE 100*100
#define MOUSE 1
#define CAT1  2
#define CAT2  3
#define SPLIT 65535

using namespace std;

int getIndex(int n, int x, int y)
{
    return n*x + y;
}

int printResult(bool f)
{
    if(f)
        cout << "YES" << endl;
    else
        cout << "NO"<< endl;
    return 0;
}


int main()
{
    int field[MSIZE];
    int fieldMaxX, fieldMaxY, field[MSIZE], k;
    cin >> fieldMaxX >> fieldMaxY;
    cin >> k;
    for(int i = 1; i <= k; i++)
    {
        for(int j=0; j<MSIZE; j++)
            field[j] = 0;

        int mous_x, mous_y;
        int cat1_x; cat1_y;
        int cat2_x; cat2_y;

        cin >> mous_x >> mous_y >> cat1_x >> cat1_y >> cat2_x >> cat2_y;

        field[getIndex(mous_x,mous_y)] = MOUSE*SPLIT;
        field[getIndex(cat1_x,cat1_y)] = CAT1*SPLIT;
        field[getIndex(cat2_x,cat2_y)] = CAT2*SPLIT;

        int wave = 1;
        bool flag = true;
        while(flag)
        {
            //wave
            //cat step
            for(int x=0; x<fieldMaxX; x++)
                for(int y=0; y<fieldMaxY; y++)
                {
                    int index = getIndex(fieldMaxX,x,y);
                    int w = field[index];
                    // если клетка пуста, переходим к следующей
                    if(w == 0)
                        continue;

                    // разделяем значене члена массива на тип клетки и номер волны
                    int type = w/SPLIT;
                    w = w - type*SPLIT;
                    // если номер волны текущий, то эту клетку обрабатывать не нужно
                    if(w == wave)
                        continue;

                    if(type == CAT1)
                    {
                        int nx = x + 1;
                        if( nx < fieldMaxX)
                        {
                            index = getIndex(fieldMaxX, nx,y);
                            if(field[index] == 0)
                                field[index] = CAT1*SPLIT + wave;
                        }
                        nx = x - 1;
                        if( nx > 0)
                        {
                            index = getIndex(fieldMaxX, nx,y);
                            if(field[index] == 0)
                                field[index] = CAT1*SPLIT + wave;
                        }
                        int ny = y + 1;
                        if(ny < fieldMaxY)
                        {
                            index = getIndex(fieldMaxX,x,ny);
                            if(field[index] == 0)
                                field[index] = CAT1*SPLIT + wave;
                        }
                        ny = y - 1;
                        if(ny > 0)
                        {
                            index = getIndex(fieldMaxX, x,ny);
                            if(field[index] == 0)
                                field[index] = CAT1*SPLIT + wave;
                        }
                    }
                    else if(type == CAT2)
                    {
                        int nx = x + 1;
                        if( nx < fieldMaxX)
                        {
                            index = getIndex(fieldMaxX, nx,y);
                            if(field[index] == 0)
                                field[index] = CAT2*SPLIT + wave;
                        }
                        nx = x - 1;
                        if( nx > 0)
                        {
                            index = getIndex(fieldMaxX, nx,y);
                            if(field[index] == 0)
                                field[index] = CAT2*SPLIT + wave;
                        }
                        int ny = y + 1;
                        if(ny < fieldMaxY)
                        {
                            index = getIndex(fieldMaxX,x,ny);
                            if(field[index] == 0)
                                field[index] = CAT2*SPLIT + wave;
                        }
                        ny = y - 1;
                        if(ny > 0)
                        {
                            index = getIndex(fieldMaxX,x,ny);
                            if(field[index] == 0)
                                field[index] = CAT2*SPLIT + wave;
                        }
                    }

                }
            // mouse step
            flag = false;
            for(int x=0; x<fieldMaxX; x++)
                for(int y=0; y<fieldMaxY; y++)
                {
                    int index = getIndex(fieldMaxX, x,y);
                    int w = field[index];
                    // если клетка пуста, переходим к следующей
                    if(w == 0)
                        continue;

                    // разделяем значене члена массива на тип клетки и номер волны
                    int type = w/SPLIT;
                    w = w - type*SPLIT;
                    // если номер волны текущий, то эту клетку обрабатывать не нужно
                    if(w == wave)
                        continue;

                    if(type == MOUSE)
                    {
                        int nx = x + 1;
                        if( nx >= fieldMaxX) // обнаружен выход за границы поля
                            return printResult(true);

                        index = getIndex(nx,y);
                        if(field[index] == 0)
                        {
                            field[index] = MOUSE*SPLIT + wave;
                            flag = true;
                        }
                        nx = x - 1;
                        if( nx < 0) // обнаружен выход за границы поля
                            return printResult(true);

                        index = getIndex(fieldMaxX, nx,y);
                        if(field[index] == 0)
                        {
                            field[index] = MOUSE*SPLIT + wave;
                            flag = true;
                        }
                        int ny = y + 1;
                        if(ny >= fieldMaxY) // обнаружен выход за границы поля
                            return printResult(true);

                        index = getIndex(fieldMaxX, x,ny);
                        if(field[index] == 0)
                        {
                            field[index] = MOUSE*SPLIT + wave;
                            flag = true;
                        }
                        ny = y - 1;
                        if(ny < 0) // обнаружен выход за границы поля
                            return printResult(true);

                        index = getIndex(fieldMaxX, x,ny);
                        if(field[index] == 0)
                        {
                            field[index] = MOUSE*SPLIT + wave;
                            flag = true;
                        }
                    }
                }
            wave++;
        }
        return printResult(false);
    }
}
